#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Contacto {
	string nombre;
	string telefono;
	string email;
};

void agregarContacto() {
	ofstream archivo("contactos.txt", ios::app); // Abrimos el archivo en modo de añadidura
	Contacto nuevoContacto;
	
	cout << "Ingrese nombre: ";
	cin >> nuevoContacto.nombre;
	cout << "Ingrese telefono: ";
	cin >> nuevoContacto.telefono;
	cout << "Ingrese email: ";
	cin >> nuevoContacto.email;
	
	archivo << nuevoContacto.nombre << " " << nuevoContacto.telefono << " " << nuevoContacto.email << endl; //cada endl hace que se cree una linea nueva en el txt
	archivo.close();
}

void mostrarContactos() {
	ifstream archivo("contactos.txt"); // Abrimos el archivo en modo lectura
	char line[128] ;
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo."<<endl;
	}else{
		while(!archivo.eof()){ //eof hace referencia a la ultima linea del archivo, por lo tanto
								//mientras exista algo que leer el while se ejecuta
			
			archivo.getline(line, sizeof(line)); //esta es una sobrecarga de getLine, el primer parametro
												//hace referencia a la variable donde se guardará
		                                        //y la segunda el tamaño de esa variable, si la linea del txt tiene mas caracteres no se guardará en line
		
			cout<<line<<endl;  //se imprimen todas las lineas del archivo hasta llegar al final.
		}
			cout<<endl;			
	}
	
	
	archivo.close(); // es importante siempre cerrar el archivo despues de realizar alguna accion en el
}

int main() {
	int opcion;
	do {
		cout << "1. Agregar Contacto" << endl;
		cout << "2. Mostrar Contactos" << endl;
		cout << "3. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			agregarContacto();
			break;
		case 2:
			mostrarContactos();
			break;
		}
		system("pause");
		system("cls");
	} while (opcion != 3);
	
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void agregarProducto() {
	
	
	string nombre, id, cantidad; // manejo el id y la cantidad como string para no tener que convertirlo a entero luego pero si se quiere trabajar con int
									// se puede usar stoi() para convertirlo
	
	ofstream archivo("inventario.txt", ios::app);
	
	cout << "Ingrese ID: ";
	cin >> id;
	cout << "Ingrese nombre: ";
	cin >> nombre;
	cout << "Ingrese cantidad en stock: ";
	cin >> cantidad;
	
	archivo << id << " " << nombre << " " << cantidad << endl;
	archivo.close();
}

void mostrarProductos() {
	ifstream archivo("inventario.txt");
	char line[128] ;
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo."<<endl;
	}else{
		while(!archivo.eof()){ 
			archivo.getline(line, sizeof(line));
			cout<<line<<endl;
		}
		
		archivo.close();
	}
}

void hacerCopia() {
	
	
	ifstream original("inventario.txt"); //archivo original
	
	char linea[128];
	
	if(original.fail()){
		
		cout<<"Error al abrir el archivo original";
		
	}else{
		
		ofstream archivoTemp("temp.txt"); //archivo en el cual vamos a guardar los datos del original pero con un campo editado
		
		if(archivoTemp.fail()){
			
			cout<<"Error al abrir el archivo temporal";
			
		}else{
			
			while(!original.eof()){
				
				original.getline(linea, sizeof(linea));
				
				archivoTemp<<linea<<endl;
				
			}
			
			archivoTemp.close();
			
		}
		
		original.close();
		
	}
	
	
	
	
	
	
	

	
	
}




int main() {
	
	int opcion;
	do {
		cout << "1. Agregar Producto" << endl;
		cout << "2. Mostrar Productos" << endl;
		cout << "3. Hacer una copia del archivo" << endl;
		cout << "4. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			agregarProducto();
			break;
		case 2:
			mostrarProductos();
			break;
		case 3:
			hacerCopia();
			break;
		}
	} while (opcion != 4);
	
	return 0;
};

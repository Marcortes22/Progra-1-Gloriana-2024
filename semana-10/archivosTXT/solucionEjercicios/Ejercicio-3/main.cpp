#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Estructura para almacenar información de un estudiante
struct Estudiante {
	string nombre;
	float calificacion;
};

// Función para agregar una nota
void agregarNota() {
	Estudiante estudiante;
	ofstream archivo("notas.txt", ios::app); // Abrir en modo de agregar
	
	cout << "Ingrese nombre del estudiante: ";
	cin >> estudiante.nombre;
	cout << "Ingrese calificación: ";
	cin >> estudiante.calificacion;
	
	archivo << estudiante.nombre << " " << estudiante.calificacion << endl;
	archivo.close();
}

// Función para mostrar todas las notas
void mostrarNotas() {
	ifstream archivo("notas.txt");
	char linea[128];
	
	if (archivo.fail()) {
		cout << "No se pudo abrir el archivo." << endl;
		return;
	}
	
	cout << "Notas de los estudiantes:" << endl;
	while (!archivo.eof()) {
		archivo.getline(linea, sizeof(linea));
		cout<<linea<<endl;
	}
	archivo.close();
}




// Función para mostrar una nota en una posición específica
void mostrarNota() {
	ifstream archivo("notas.txt");
	
	int posicion; // -> es la posicion que el usuario quiere mostrar  ejemplo contador = 7
	int contador = 0;  // -> es un contador que aumente en cada iteracion del while
	bool encontrado = false;  // -> cambia su estado si existe la posicion que se quiere imprimir
	
	char linea[128];
	cout << "Ingrese la posición (linea) que desea mostrar (0 para la primera linea): ";
	cin >> posicion;
	
	while(!archivo.eof()){
		
		archivo.getline(linea, sizeof(linea));
		
		if(contador == posicion){
			encontrado = true;
			cout<<linea<<endl;
		}
			contador++;
	}
	
	if(!encontrado){
		cout<<"La linea buscada no existe"<<endl;
	}
	

	archivo.close();
}

int main() {
	int opcion;
	do {
		cout << "1. Agregar Nota" << endl;
		cout << "2. Mostrar Notas" << endl;
		cout << "3. Mostrar Nota" << endl;
		cout << "4. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			agregarNota();
			break;
		case 2:
			mostrarNotas();
			break;
		case 3:
			mostrarNota();
			break;
		case 4:
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida. Intente de nuevo." << endl;
		}
		system("pause");
		system("cls");
	} while (opcion != 4);
	
	return 0;
}

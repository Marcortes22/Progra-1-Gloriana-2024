#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
#include "Alimentacion.h"
#include "Animal.h"
#include "Mamifero.h"
#include "Ave.h"
#include "Reptil.h"
#include "Cuidador.h"
#include "ContenedorAnimal.h"



int main() {
	// Crear un contenedor de animales din�mico
	ContenedorAnimal* contenedor = new ContenedorAnimal();
	
	// Vector para almacenar cuidadores
	vector<Cuidador*> cuidadores;
	
	int opcion;
	
	// Ciclo principal del men�
	do {
		// Mostrar opciones del men�
		cout << "=== Menu ===" << endl;
		cout << "1. Agregar Animal" << endl;
		cout << "2. Mostrar Animales" << endl;
		cout << "3. Alimentar animal" << endl;
		cout << "4. Alimentar animales" << endl;
		cout << "5. Hacer sonar animales" << endl;
		cout << "6. Salir" << endl;
		cout << "7. Salir" << endl;
		cout << "Selecciona una opci�n: ";
		cin >> opcion;
		cin.ignore();  // Limpiar el buffer de entrada
		system("cls");  // Limpiar la pantalla
		
		// Evaluar la opci�n seleccionada
		switch (opcion) {
		case 1: {
			// Variables para los datos del animal
			string nombreAnimal, tipoComida, cantidadComida, horarioAlimentacion, nombreCuidador;
			int edad, tipoAnimal, cedula;
			
			// Pedir los datos del nuevo animal
			cout << "\nIngresa el nombre del animal: ";
			cin >> nombreAnimal;
			cout << "\nIngresa la edad del animal: ";
			cin >> edad;
			cout << "\nIngresa el tipo de comida: ";
			cin >> tipoComida;
			cout << "\nIngresa la cantidad de comida: ";
			cin >> cantidadComida;
			
			// Limpiar el buffer de entrada y pedir el horario de alimentaci�n
			cin.ignore();
			cout << "\nIngresa el horario de alimentaci�n: ";
			getline(cin, horarioAlimentacion);
			
			// Seleccionar el tipo de animal
			cout << "\nSelecciona el tipo de animal:\n";
			cout << "1. Mam�fero\n";
			cout << "2. Reptil\n";
			cout << "3. Ave\n";
			cout << "Opci�n: ";
			cin >> tipoAnimal;
			
			// Lo ideal ser�a simplemente asignar un cuidador no crear uno nuevo, de igual manera se est�n almacenando
			//en un contenedor por lo que pueden depurar el programa
			cout << "Ingrese la c�dula del nuevo cuidador a cargo: ";
			cin >> cedula;
			cout << "Ingrese el nombre del nuevo cuidador a cargo: ";
			cin >> nombreCuidador;
			
			// Crear un nuevo cuidador y agregarlo al vector de cuidadores
			Cuidador* nuevoCuidador = new Cuidador(cedula, nombreCuidador);
			cuidadores.push_back(nuevoCuidador);
			
			// Crear un objeto de Alimentaci�n
			Alimentacion alimentacion(tipoComida, cantidadComida, horarioAlimentacion);
			
			// Agregar el animal seg�n el tipo seleccionado
			switch (tipoAnimal) {
			case 1:
				contenedor->agregarAnimal(new Mamifero(nombreAnimal, edad, alimentacion, nuevoCuidador));
				break;
			case 2:
				contenedor->agregarAnimal(new Reptil(nombreAnimal, edad, alimentacion, nuevoCuidador));
				break;
			case 3:
				contenedor->agregarAnimal(new Ave(nombreAnimal, edad, alimentacion, nuevoCuidador));
				break;
			default:
				cout << "Tipo de animal no v�lido. No se agregar�." << endl;
			}
			break;
		}
		
		case 2: {
			// Mostrar todos los animales del contenedor
			contenedor->imprimirAnimales();
			break;
		}
		
		case 3: {
			// Alimentar un animal espec�fico
			if (!cuidadores.empty()) {
				string nombreAnimal;
				cout << "Ingrese el nombre del animal a alimentar: ";
				cin >> nombreAnimal;
				contenedor->alimentarAnimal(nombreAnimal);
			} else {
				cout << "Agregue al menos un cuidador para alimentar animales." << endl;
			}
			break;
		}
		
		case 4: {
			// Alimentar todos los animales
			if (!cuidadores.empty()) {
				int cedulaCuidador;
				bool encontrado = false;
				cout << "Ingrese la c�dula del cuidador que alimentar� a todos los animales: ";
				cin >> cedulaCuidador;
				
				// Buscar al cuidador por su c�dula
				for (int i = 0; i < cuidadores.size(); i++) {
					if (cuidadores[i]->getCedula() == cedulaCuidador) {
						encontrado = true;
						contenedor->alimentarAnimales(cuidadores[i]);
					}
				}
				
				if (!encontrado) {
					cout << "No se encontr� un cuidador con ese n�mero de c�dula." << endl;
				}
			} else {
				cout << "Agregue al menos un cuidador para alimentar a los animales." << endl;
			}
			break;
		}
		
		case 5: {
			// Hacer que todos los animales hagan su sonido
			contenedor->imprimirSonidos();
			break;
		}
		
		case 6: {
			cout << "Saliendo del programa..." << endl;
			opcion = 6;  // Cambiar el valor de opcion para salir del bucle
			break;
		}
		
		default: {
			cout << "Opci�n no v�lida, intenta de nuevo." << endl;
		}
		
		}
		
		system("pause");  // Pausar la ejecuci�n para que el usuario vea el mensaje
		system("cls");    // Limpiar la pantalla
		
	} while (opcion != 6);  // Repetir el men� hasta que el usuario elija salir
	

	
	return 0;
}



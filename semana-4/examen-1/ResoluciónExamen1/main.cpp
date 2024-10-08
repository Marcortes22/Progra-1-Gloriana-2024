

#include <iostream>
using namespace std;

#include"ListaPacientes.h"

int main()
{
	ListaPacientes lista;
	int opcion;
	
	do {
		cout << "========================================" << endl;
		cout << "\n--- Menu de Gestion de Pacientes ---\n\n";
		cout << "========================================" << endl;
		cout << "1. Ingresar un nuevo paciente\n";
		cout << "2. Modificar la informacion de un paciente existente\n";
		cout << "3. Buscar un paciente\n";
		cout << "4. Mostrar el promedio de edad de los pacientes\n";
		cout << "5. Ver el estado de internacion de los pacientes\n";
		cout << "6. Ver lista pacientes\n";
		cout << "7. Salir del programa\n";
		cout << "========================================\n" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		// Limpiar la pantalla
		system("cls");
		
		switch (opcion) {
		case 1: {
			cout << "Opcion 1: Ingresar un nuevo paciente\n";
			
			// Llamar a la funci�n para ingresar un nuevo paciente
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 2: {
			cout << "Opcion 2: Modificar la informacion de un paciente existente\n";
			// Llamar a la funci�n para modificar la informaci�n de un paciente
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 3: {
			cout << "Opcion 3: Buscar un paciente\n";
			// Llamar a la funci�n para buscar un paciente
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 4: {
			cout << "Opcion 4: Mostrar el promedio de edad de los pacientes\n";
			// Llamar a la funci�n para mostrar el promedio de edad
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 5: {
			cout << "Opcion 5: Ver el estado de internacion de los pacientes\n";
			// Llamar a la funci�n para mostrar el estado de internaci�n
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 6: {
			lista.getListPacientes();
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		case 7: {
			cout << "Saliendo del programa...\n";
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
			break;
		}
		default: {
			cout << "Opcion invalida. Por favor, seleccione una opcion valida.\n";
			system("pause"); // Pausar la ejecuci�n para que el usuario pueda leer el mensaje
			system("cls"); // Limpiar la pantalla
		}
		}
	} while (opcion != 7);
}

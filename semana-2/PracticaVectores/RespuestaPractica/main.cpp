#include<iostream>
using namespace std;


	int numeros[5] = {1,2,3,4,5};
	
	void ejericio1();


int main () {
	
	int opcion;
	
	do {
		// Mostrar el menú
		cout << "===== MENU PRINCIPAL =====" << endl;
		cout << "1. sumatoria de elementos de arreglo" << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. Salir" << endl;
		cout << "Seleccione una opción: ";
		cin >> opcion;
		
		// Procesar la opción seleccionada
		switch (opcion) {
		case 1:
			ejericio1();
			// Agrega el código para la Opción 1 aquí
			break;
		case 2:
			cout << "Has seleccionado la Opción 2" << endl;
			// Agrega el código para la Opción 2 aquí
			break;
		case 3:
			cout << "Has seleccionado la Opción 3" << endl;
			// Agrega el código para la Opción 3 aquí
			break;
		case 4:
			cout << "Has seleccionado la Opción 4" << endl;
			// Agrega el código para la Opción 4 aquí
			break;
		case 5:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opción no válida. Intente de nuevo." << endl;
		}
		
		cout << endl;
		
	} while (opcion != 5);
	
	return 0;
}


	void ejericio1(){
		
		int sumatoria = 0;
		
		for(int i = 0; i < 5; i++){
			
			sumatoria += numeros[i];
		
		}
		
		cout<<"El resultado de la suma de los elementos de el arreglo es: "<<sumatoria<<endl;
	}

#include<iostream>
using namespace std;


	int numeros[5] = {1,2,3,4,5};
	
	void ejericio1();


int main () {
	
	int opcion;
	
	do {
		// Mostrar el men�
		cout << "===== MENU PRINCIPAL =====" << endl;
		cout << "1. sumatoria de elementos de arreglo" << endl;
		cout << "2. " << endl;
		cout << "3. " << endl;
		cout << "4. " << endl;
		cout << "5. Salir" << endl;
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		
		// Procesar la opci�n seleccionada
		switch (opcion) {
		case 1:
			ejericio1();
			// Agrega el c�digo para la Opci�n 1 aqu�
			break;
		case 2:
			cout << "Has seleccionado la Opci�n 2" << endl;
			// Agrega el c�digo para la Opci�n 2 aqu�
			break;
		case 3:
			cout << "Has seleccionado la Opci�n 3" << endl;
			// Agrega el c�digo para la Opci�n 3 aqu�
			break;
		case 4:
			cout << "Has seleccionado la Opci�n 4" << endl;
			// Agrega el c�digo para la Opci�n 4 aqu�
			break;
		case 5:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
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

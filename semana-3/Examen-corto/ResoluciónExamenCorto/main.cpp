#include <iostream>
using namespace std;

#include "Contenedor.h"

int main() {
	Contenedor contenedor;
	int opcion;
	
	do {
		// Mostrar el men�
		cout << "===== MENU PRINCIPAL =====" << endl;
		cout << "1. Agregar producto" << endl;
		cout << "2. Calcular monto en inventario" << endl;
		cout << "3. Buscar productos por categor�a" << endl;
		cout << "4. Imprimir Productos" << endl;
		cout << "5. Comprar Producto" << endl;
		cout << "6. Salir" << endl;
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		
		// Procesar la opci�n seleccionada
		switch (opcion) {
		case 1: {
			int codigo, cantidad;
			double precio;
			string descripcion, categoria;
			int categoriaOpcion;
			
			cout << "Ingrese el c�digo del producto: ";
			cin >> codigo;
			cin.ignore();
			
			cout << "Seleccione la categor�a del producto:\n";
			cout << "1. L�cteos\n";
			cout << "2. Carnes\n";
			cout << "3. Verduras\n";
			cout << "4. Hortalizas\n";
			cout << "5. Otra\n";
			cout << "Ingrese una opci�n: ";
			cin >> categoriaOpcion;
			cin.ignore();
			
			// Asignar la categor�a basada en la opci�n seleccionada
			switch (categoriaOpcion) {
			case 1:
				categoria = "l�cteos";
				break;
			case 2:
				categoria = "carnes";
				break;
			case 3:
				categoria = "verduras";
				break;
			case 4:
				categoria = "hortalizas";
				break;
			case 5:
				categoria = "otra";
				break;
			default:
				categoria = "otra";
				break;
			}
			
			cout << "Ingrese la descripci�n del producto: ";
			getline(cin, descripcion);
			cout << "Ingrese la cantidad del producto: ";
			cin >> cantidad;
			cout << "Ingrese el precio del producto: ";
			cin >> precio;
			
			Producto nuevoProducto(codigo, categoria, descripcion, cantidad, precio);
			contenedor.agregarProducto(nuevoProducto);
			cout << "Producto agregado exitosamente." << endl;
			system("pause");
			system("cls");
			
			break;
		}
		case 2: {
			double monto = contenedor.montoInventario();
			cout << "El monto total en inventario es: " << monto << endl;
			system("pause");
			system("cls");
			
			break;
		}
		case 3: {
			string categoria;
			int categoriaOpcion;
			
			cout << "Seleccione la categor�a a buscar:\n";
			cout << "1. L�cteos\n";
			cout << "2. Carnes\n";
			cout << "3. Verduras\n";
			cout << "4. Hortalizas\n";
			cout << "5. Otra\n";
			cout << "Ingrese una opci�n: ";
			cin >> categoriaOpcion;
			
			// Asignar la categor�a basada en la opci�n seleccionada
			switch (categoriaOpcion) {
			case 1:
				categoria = "l�cteos";
				break;
			case 2:
				categoria = "carnes";
				break;
			case 3:
				categoria = "verduras";
				break;
			case 4:
				categoria = "hortalizas";
				break;
			case 5:
			default:
				categoria = "otra";
				break;
			}
			
			contenedor.imprimirProductosPorCategoria(categoria);
			system("pause");
			system("cls");
			
			break;
		}
		case 4: {
			contenedor.imprimirProductos();
			system("pause");
			system("cls");
			break;
		}
		case 5: {
			int codigo, cantidad;
			cout << "Ingrese el c�digo del producto a comprar: ";
			cin >> codigo;
			cout << "Ingrese la cantidad a comprar: ";
			cin >> cantidad;
			
			contenedor.comprarProducto(codigo, cantidad);
			system("pause");
			system("cls");
			break;
		}
		case 6: {
			cout << "Saliendo del programa..." << endl;
			break;
		}
		default: {
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
			system("pause");
			system("cls");
			break;
		}
		}
		
	} while (opcion != 6);
	
	return 0;
}

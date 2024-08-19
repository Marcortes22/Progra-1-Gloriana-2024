#include "Producto.h"

class Contenedor {
	
private:
	const static int TAM = 50;
	Producto vectorProducto[TAM];
	int cantidad;
	
public:
	
	Contenedor() {
		cantidad = 0;
	}
	
	void agregarProducto(Producto producto) {
		
		if (cantidad < TAM) {
			vectorProducto[cantidad] = producto;
			cantidad++;
		} else {
			cout << "El arreglo está lleno."<<endl;
		}
		
	}
	
	void imprimirProductos() {
		
		for (int i = 0; i < cantidad; i++) {
			cout << vectorProducto[i].toString();
			cout << "--------------------------" << endl;
		}
		
	}
	
	void imprimirProductosPorCategoria(string _categoria) {
		
		int contadorCategoria = 0;
		
		for (int i = 0; i < cantidad; i++) {
			
			if (vectorProducto[i].getCategoria() == _categoria) {
				cout << vectorProducto[i].toString();
				cout << "--------------------------" << endl;
				contadorCategoria += vectorProducto[i].getCantidad();
			}
		}
		
		cout << "Existen " << contadorCategoria << " elementos en la categoria: " << _categoria<<endl;
	}
	
	
	Producto buscarProducto(int codigo) {
		
		for (int i = 0; i < cantidad; i++) {
			if (vectorProducto[i].getCodigo() == codigo) {
				return vectorProducto[i];
			}
		}
		
		Producto vacio;
		return vacio;
		
	}
	
	
	double montoInventario() {
		
		double montoTotal = 0;
		
		for (int i = 0; i < cantidad; i++) {
			// Lógica para calcular el monto total
			montoTotal += vectorProducto[i].getCantidad() * vectorProducto[i].getPrecio();
		}
		
		return montoTotal;
	}
	
	
	void comprarProducto(int _codigo, int _cantidadComprar) {
		
		for (int i = 0; i < cantidad; i++) {
			
			if (vectorProducto[i].getCodigo() == _codigo) {  
				
				if (vectorProducto[i].getCantidad() > _cantidadComprar) {
					// Compra efectuada con éxito
					int cantidadActual = vectorProducto[i].getCantidad();
					
					vectorProducto[i].setCantidad(cantidadActual - _cantidadComprar);
					
					cout << "Compra efectuada con éxito!!\nInfo: Cantidad anterior a la compra: "
						<< cantidadActual << "\nCantidad después de la compra: "
						<< cantidadActual - _cantidadComprar<<endl;
					
				} else {
					// Rechazo de compra por falta de stock
					cout << "No hay suficientes productos"<<endl;
				}
				
			}
			
		}
	}
	
};

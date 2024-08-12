#include "Empleado.h"

class ContenedorEmpleado {
private:
	static const int TAM = 15; 
	Empleado vectorEmp[TAM];
	int cantidad;
	
public:
	ContenedorEmpleado() {
		cantidad = 0;
	}
	
	void agregarEmpleado(Empleado empleado) {
		if (cantidad < TAM) {
			vectorEmp[cantidad] = empleado;
			cantidad++;
		}
	}
	
	void imprimirVector() {
		for (int i = 0; i < cantidad; i++) {
			cout << vectorEmp[i].toString()
				<< "=======================================\n";
		}
	}
	
	double calcularNomina() {
		double nomina = 0.0;
		for (int i = 0; i < cantidad; i++) {
			nomina += vectorEmp[i].getSalario();
		}
		return nomina;
	}
	
	double calcularMediaSalarios() {
		double nomina = 0.0;
		for (int i = 0; i < cantidad; i++) {
			nomina += vectorEmp[i].getSalario();
		}
		return nomina / cantidad;
	}
	
	Empleado EmpleadoConSalarioMaximo() {
		Empleado empleadoMax;
		if (cantidad > 0) {
			empleadoMax = vectorEmp[0];
			for (int i = 1; i < cantidad; i++) {
				if (vectorEmp[i].getSalario() > empleadoMax.getSalario()) {
					empleadoMax = vectorEmp[i];
				}
			}
		}
		return empleadoMax;
	}
	
	void ordenBurVector() { // Ordena el vector por el metodo burbuja
		Empleado aux;
		int i, j;
		for (i = cantidad - 1; i > 0; i--) {
			for (j = 0; j < i; j++) {
				if (vectorEmp[j].getCodigo() > vectorEmp[j + 1].getCodigo()) {
					aux = vectorEmp[j];
					vectorEmp[j] = vectorEmp[j + 1];
					vectorEmp[j + 1] = aux;
				}
			}
		}
	}
	
	bool encuentraEmpleado(int codigo) {
		for (int i = 0; i < cantidad; i++) {
			if (vectorEmp[i].getCodigo() == codigo) {
				return true;
			}
		}
		return false;
	}
	
	void eliminarElementoPos(int pos) {
		if (pos <= (cantidad - 1)) {
			for (int i = pos; i < cantidad - 1; i++) {
				vectorEmp[i] = vectorEmp[i + 1];
			}
			cantidad--;
		}
	}
};

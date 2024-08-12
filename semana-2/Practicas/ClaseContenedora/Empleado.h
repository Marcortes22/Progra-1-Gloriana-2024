#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <sstream>


using namespace std; // Puedes incluir esto si prefieres no usar el prefijo std::

// Clase Empleado
class Empleado {
private:
	int codigo;
	string nombre;
	double salario;
	
public:
	// Constructor con parámetros
	Empleado(int codigo, string nombre, double salario) {
		this->nombre = nombre;
		this->codigo = codigo;
		this->salario = salario;
	}
	
	// Constructor por defecto
	Empleado() {}
	
	// Método para obtener el salario
	double getSalario() {
		return salario;
	}
	
	// Método para obtener el código (arreglado para devolver 'codigo' en lugar de 'salario')
	int getCodigo() {
		return codigo;
	}
	
	// Método para convertir el objeto a una cadena
	string toString() {
		stringstream salida;
		salida << "Codigo: " << codigo << "\n"
			<< "Nombre: " << nombre << "\n"
			<< "Salario: " << salario << "\n";
		return salida.str();
	}
};

#endif // EMPLEADO_H

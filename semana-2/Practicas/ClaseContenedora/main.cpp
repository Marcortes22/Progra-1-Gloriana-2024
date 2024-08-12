#include<iostream>
using namespace std;
#include"Empleado.h"
#include "ContenedorEmpleado.h"


int main () {
	Empleado empleado1(123, "Ana", 324500);
	Empleado empleado2(125, "Juana", 366500);
	Empleado empleado3(126, "Ramon", 316500);
	
	ContenedorEmpleado contenedor1;
	
	contenedor1.agregarEmpleado(empleado1);
	contenedor1.agregarEmpleado(empleado2);
	contenedor1.agregarEmpleado(empleado3);
	contenedor1.imprimirVector();

	
	cout<<"La media de los es:"
		<<contenedor1.calcularMediaSalarios() <<endl;
	
	
	empleado1 = contenedor1.EmpleadoConSalarioMaximo();
	if (empleado1.getSalario())
	{
		cout << "El empleado con salario maximo es" <<
			empleado1.toString()<<endl;
	}
	
	return 0;
}


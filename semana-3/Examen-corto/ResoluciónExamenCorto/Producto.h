#include <sstream>
#include <string>
using namespace std;

class Producto {
	
private:
	int codigo;
	string categoria;
	string descripcion;
	int cantidad;
	double precio;
	
public:
	// Constructor por defecto
	Producto() : codigo(0), categoria(""), descripcion(""), cantidad(0), precio(0.0) {}
	
	// Constructor con parámetros
	Producto(int codigo, string categoria, string descripcion, int cantidad, double precio) {
		this->codigo = codigo;
		this->categoria = categoria;
		this->descripcion = descripcion;
		this->cantidad = cantidad;
		this->precio = precio;
	}
	
	int getCodigo() {
		return this->codigo;
	}
	
	string getCategoria() {
		return this->categoria;
	}
	
	string getDescripcion() {
		return this->descripcion;
	}
	
	int getCantidad() {
		return cantidad;
	}
	
	double getPrecio() {
		return precio;
	}
	
	void setCodigo(int codigo) {
		this->codigo = codigo;
	}
	
	void setCategoria(string categoria) {
		this->categoria = categoria;
	}
	
	void setDescripcion(string descripcion) {
		this->descripcion = descripcion;
	}
	
	void setCantidad(int cantidad) {
		this->cantidad = cantidad;
	}
	
	void setPrecio(double precio) {
		this->precio = precio;
	}
	
	string toString() {
		stringstream salida;
		salida << "Codigo: " << codigo << "\nCategoria: " << categoria 
			<< "\nDescripcion: " << descripcion << "\nCantidad: " 
			<< cantidad << "\nPrecio: " << precio << endl;
		return salida.str();
	}
};

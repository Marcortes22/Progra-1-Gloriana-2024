#include <iostream>
using namespace std;


// Clase base
class Animal {
	
private: 
	
	string nombre;
	string color;
	
public:
	
	Animal(string nombre, string color){
		this->nombre = nombre;
		this->color = color;
	}
	
	Animal(){
		this->nombre = "";
	}
	
	 void hacerSonido() {
		cout << "El animal hace un sonido.\n";
	}
};




// Clase derivada
class Perro : public Animal {
	
private:
	string raza;
	int nPatas;
	
public:
	//constructor de una clase hija
	Perro(string raza, string nombre, string color, int nPatas) : Animal(nombre, color){
		this->raza = raza;
		this->nPatas = nPatas;
	}
	
	Perro():Animal(){
		
	}
	
	void hacerSonido() {
		Animal::hacerSonido();
		cout << "El perro hace guau guau.\n";
	}

};

int main() {
	// Crear un objeto de la clase base
	Animal miAnimal;
	//miAnimal.hacerSonido(); // Salida: El animal hace un sonido.
	
	// Crear un objeto de la clase derivada
	Perro miPerro("Pastor aleman", "Bruno","azul",4);
	miPerro.hacerSonido();
	
	
	return 0;
}

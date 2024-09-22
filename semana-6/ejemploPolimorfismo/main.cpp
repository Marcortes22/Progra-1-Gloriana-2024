#include <iostream>
using namespace std;

// Clase base
class Animal {
public:
	
	// Método virtual para permitir polimorfismo
	virtual void hacerSonido(){
		cout << "El animal hace un sonido." << endl;
	}
	
};

// Clase derivada
class Perro : public Animal {
public:
	// Sobrescribe el método hacerSonido() para Perro
	void hacerSonido() override {
		cout << "El perro ladra." << endl;
	}
};

// Clase derivada
class Gato : public Animal {
public:
	// Sobrescribe el método hacerSonido() para Gato
	void hacerSonido() override {
		cout << "El gato maulla." << endl;
	}
};

int main() {

Perro ob1;
ob1.hacerSonido();

Gato ob2;
ob2.hacerSonido();
	
	return 0;
}

class Reptil : public Animal {
	
private:
	// No se requieren atributos privados adicionales en este momento
	
public:
	// Constructor que inicializa usando el constructor de la clase base Animal
	Reptil(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador) 
		: Animal(nombre, edad, alimentacion, cuidador) {}
	
	// Implementación del método para hacer el sonido característico de un reptil
	void hacerSonido() override {
		cout << nombre << " está haciendo un sonido de reptil" << endl;
	}
	
	// Implementación del método para simular la acción de comer del reptil
	void comer() override {
		cout << nombre << " está comiendo: " << getTipoAlimentacion() << endl;
	}
};

class Mamifero : public Animal {
	
private:
	// No tiene atributos propios
	
public:
	// Constructor que inicializa usando el constructor de la clase base Animal
	Mamifero(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador) 
		: Animal(nombre, edad, alimentacion, cuidador) {}
	
	// Implementación del método para hacer el sonido característico de un mamífero
	void hacerSonido() override {
		cout << nombre << " está haciendo un sonido de mamífero" << endl;
	}
	
	// Implementación del método para simular la acción de comer del mamífero
	void comer() override {
		cout << nombre << " está comiendo: " << getTipoAlimentacion() << endl;
	}
};

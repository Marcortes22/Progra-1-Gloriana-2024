class Ave : public Animal {
	
private:
	// No se requieren atributos privados adicionales en este momento
	
public:
	// Constructor que inicializa usando el constructor de la clase base Animal
	Ave(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador) 
		: Animal(nombre, edad, alimentacion, cuidador) {}
	
	// Implementación del método para hacer el sonido característico de un ave
	void hacerSonido() override {
		cout << nombre << " está haciendo un sonido de ave" << endl;
	}
	
	// Implementación del método para simular la acción de comer del ave
	void comer() override {
		cout << nombre << " está comiendo: " << getTipoAlimentacion() << endl;
	}
};

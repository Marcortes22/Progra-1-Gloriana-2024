class Ave : public Animal {
	
private:
	// No se requieren atributos privados adicionales en este momento
	
public:
	// Constructor que inicializa usando el constructor de la clase base Animal
	Ave(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador) 
		: Animal(nombre, edad, alimentacion, cuidador) {}
	
	// Implementaci�n del m�todo para hacer el sonido caracter�stico de un ave
	void hacerSonido() override {
		cout << nombre << " est� haciendo un sonido de ave" << endl;
	}
	
	// Implementaci�n del m�todo para simular la acci�n de comer del ave
	void comer() override {
		cout << nombre << " est� comiendo: " << getTipoAlimentacion() << endl;
	}
};

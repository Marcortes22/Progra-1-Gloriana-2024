class Mamifero : public Animal {
	
private:
	// No tiene atributos propios
	
public:
	// Constructor que inicializa usando el constructor de la clase base Animal
	Mamifero(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador) 
		: Animal(nombre, edad, alimentacion, cuidador) {}
	
	// Implementaci�n del m�todo para hacer el sonido caracter�stico de un mam�fero
	void hacerSonido() override {
		cout << nombre << " est� haciendo un sonido de mam�fero" << endl;
	}
	
	// Implementaci�n del m�todo para simular la acci�n de comer del mam�fero
	void comer() override {
		cout << nombre << " est� comiendo: " << getTipoAlimentacion() << endl;
	}
};

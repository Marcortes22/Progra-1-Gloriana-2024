class Cuidador {
	
private:
	int cedula;       // Número de identificación del cuidador
	string nombre;    // Nombre del cuidador
	
public:
	// Constructor que inicializa los atributos cedula y nombre
	Cuidador(int cedula, string nombre) 
		: cedula(cedula), nombre(nombre) {}
	
	// Método que convierte la información del cuidador en un string
	string toString() {
		stringstream ss;
		ss << "Cédula: " << cedula << "\n";
		ss << "Nombre: " << nombre << "\n";
		return ss.str();
	}
	
	// Método que permite alimentar a un solo animal
	void alimentar(Animal* animal) {
		cout << nombre << " está alimentando a: " << animal->getNombre() << endl;
		animal->comer();  // Llama al método comer del animal
	}
	
	// Método que permite alimentar a varios animales
	void alimentar(vector<Animal*> animales) {
		for (int i = 0; i < animales.size(); i++) {
			cout << nombre << " está alimentando a: " << animales[i]->getNombre();
			cout << endl;
			animales[i]->comer();  // Llama al método comer de cada animal
			cout << endl;
		}
	}
	
	// Método que devuelve la cédula del cuidador
	int getCedula() {
		return cedula;
	}
	
	// Método que establece el nombre del cuidador
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	
	// Método que obtiene el nombre del cuidador
	string getNombre() {
		return nombre;
	}
};

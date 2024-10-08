class Cuidador {
	
private:
	int cedula;       // N�mero de identificaci�n del cuidador
	string nombre;    // Nombre del cuidador
	
public:
	// Constructor que inicializa los atributos cedula y nombre
	Cuidador(int cedula, string nombre) 
		: cedula(cedula), nombre(nombre) {}
	
	// M�todo que convierte la informaci�n del cuidador en un string
	string toString() {
		stringstream ss;
		ss << "C�dula: " << cedula << "\n";
		ss << "Nombre: " << nombre << "\n";
		return ss.str();
	}
	
	// M�todo que permite alimentar a un solo animal
	void alimentar(Animal* animal) {
		cout << nombre << " est� alimentando a: " << animal->getNombre() << endl;
		animal->comer();  // Llama al m�todo comer del animal
	}
	
	// M�todo que permite alimentar a varios animales
	void alimentar(vector<Animal*> animales) {
		for (int i = 0; i < animales.size(); i++) {
			cout << nombre << " est� alimentando a: " << animales[i]->getNombre();
			cout << endl;
			animales[i]->comer();  // Llama al m�todo comer de cada animal
			cout << endl;
		}
	}
	
	// M�todo que devuelve la c�dula del cuidador
	int getCedula() {
		return cedula;
	}
	
	// M�todo que establece el nombre del cuidador
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	
	// M�todo que obtiene el nombre del cuidador
	string getNombre() {
		return nombre;
	}
};

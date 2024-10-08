class Cuidador; // Forward declaration para evitar problemas de dependencia circular

class Animal {
	
protected:
	// Atributos protegidos para que puedan ser accedidos por clases derivadas
	string nombre;
	int edad;
	Alimentacion alimentacion;
	Cuidador* cuidador; // Agregaci�n, ya que almacena un puntero a Cuidador, pero no el objeto completo
	
public:
	// Constructor que inicializa los atributos del animal
	Animal(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador)
		: nombre(nombre), edad(edad), alimentacion(alimentacion), cuidador(cuidador) {}
	
	// M�todos set y get para manejar el nombre del animal
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	
	string getNombre() {
		return nombre;
	}
	
	// M�todos set y get para manejar la edad del animal
	void setEdad(int edad) {
		this->edad = edad;
	}
	
	int getEdad() {
		return edad;
	}
	
	// M�todo para obtener el tipo de alimentaci�n del animal
	string getTipoAlimentacion() {
		return alimentacion.getTipoComida();
	}
	
	// M�todo set para cambiar la alimentaci�n del animal si es necesario
	void setAlimentacion(Alimentacion alimentacion) {
		this->alimentacion = alimentacion;
	}
	
	// M�todo para obtener el objeto Cuidador asociado al animal
	Cuidador* getCuidador() {
		return cuidador;
	}
	
	// M�todo set para asignar un nuevo cuidador al animal
	void setCuidador(Cuidador* cuidador) {
		this->cuidador = cuidador;
	}
	
	// M�todo para mostrar la informaci�n completa de la alimentaci�n
	void getAlimentacion() {
		cout << alimentacion.toString();
	}
	
	// M�todo para convertir los datos del animal en una cadena de texto para mostrar
	string animalesToString() {
		stringstream ss;
		ss << "===========================\n";
		ss << "Informacion del animal\n";
		ss << "Nombre: " << nombre << "\n";
		ss << "Edad: " << edad << "\n";
		ss << "---------------------------------\n";
		ss << "Informacion de la alimentacion de: " << nombre << "\n";
		ss << alimentacion.toString(); // Convierte el objeto Alimentacion a string
		ss << "---------------------------------\n";
		ss << "===========================\n\n";
		return ss.str();
	}
	
	// M�todos virtuales puros (obligatorios para clases derivadas)
	virtual void hacerSonido() = 0; // Cada animal debe tener su propio sonido
	virtual void comer() = 0; // Cada animal tiene su forma de comer
};

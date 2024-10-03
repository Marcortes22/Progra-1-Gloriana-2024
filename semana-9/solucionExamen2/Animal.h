class Cuidador; // Forward declaration para evitar problemas de dependencia circular

class Animal {
	
protected:
	// Atributos protegidos para que puedan ser accedidos por clases derivadas
	string nombre;
	int edad;
	Alimentacion alimentacion;
	Cuidador* cuidador; // Agregación, ya que almacena un puntero a Cuidador, pero no el objeto completo
	
public:
	// Constructor que inicializa los atributos del animal
	Animal(string nombre, int edad, Alimentacion alimentacion, Cuidador* cuidador)
		: nombre(nombre), edad(edad), alimentacion(alimentacion), cuidador(cuidador) {}
	
	// Métodos set y get para manejar el nombre del animal
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	
	string getNombre() {
		return nombre;
	}
	
	// Métodos set y get para manejar la edad del animal
	void setEdad(int edad) {
		this->edad = edad;
	}
	
	int getEdad() {
		return edad;
	}
	
	// Método para obtener el tipo de alimentación del animal
	string getTipoAlimentacion() {
		return alimentacion.getTipoComida();
	}
	
	// Método set para cambiar la alimentación del animal si es necesario
	void setAlimentacion(Alimentacion alimentacion) {
		this->alimentacion = alimentacion;
	}
	
	// Método para obtener el objeto Cuidador asociado al animal
	Cuidador* getCuidador() {
		return cuidador;
	}
	
	// Método set para asignar un nuevo cuidador al animal
	void setCuidador(Cuidador* cuidador) {
		this->cuidador = cuidador;
	}
	
	// Método para mostrar la información completa de la alimentación
	void getAlimentacion() {
		cout << alimentacion.toString();
	}
	
	// Método para convertir los datos del animal en una cadena de texto para mostrar
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
	
	// Métodos virtuales puros (obligatorios para clases derivadas)
	virtual void hacerSonido() = 0; // Cada animal debe tener su propio sonido
	virtual void comer() = 0; // Cada animal tiene su forma de comer
};

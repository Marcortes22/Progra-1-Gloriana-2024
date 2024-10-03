class Alimentacion {
	
private:
	string tipoComida;           // Tipo de comida que consume el animal
	string cantidad;             // Cantidad de comida
	string horarioAlimentacion;  // Horario en que se alimenta el animal
	
public:
	// Constructor que inicializa los atributos de alimentación
	Alimentacion(string tipoComida, string cantidad, string horarioAlimentacion)
		: tipoComida(tipoComida), cantidad(cantidad), horarioAlimentacion(horarioAlimentacion) {}
	
	// Métodos set y get para manejar el tipo de comida
	void setTipoComida(string tipoComida) {
		this->tipoComida = tipoComida;
	}
	
	string getTipoComida() {
		return tipoComida;
	}
	
	// Métodos set y get para manejar la cantidad de comida
	void setCantidad(string cantidad) {
		this->cantidad = cantidad;
	}
	
	string getCantidad() {
		return cantidad;
	}
	
	// Métodos set y get para manejar el horario de alimentación
	void setHorarioAlimentacion(string horarioAlimentacion) {
		this->horarioAlimentacion = horarioAlimentacion;
	}
	
	string getHorarioAlimentacion() {
		return horarioAlimentacion;
	}
	
	// Método que convierte la información de alimentación a una cadena de texto
	string toString() {
		stringstream ss;
		ss << "Tipo de Comida: " << tipoComida << "\n";
		ss << "Cantidad: " << cantidad << "\n";
		ss << "Horario de Alimentación: " << horarioAlimentacion << "\n";
		return ss.str();
	}
};

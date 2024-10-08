class ContenedorAnimal {
	
private:
	vector<Animal*> listaAnimal;  // Contenedor que almacena punteros a objetos de tipo Animal
	
public:
	// M�todo para agregar un nuevo animal al contenedor
	void agregarAnimal(Animal *nuevoAnimal) {
		listaAnimal.push_back(nuevoAnimal);
	}
	
	// M�todo para alimentar a un animal espec�fico por nombre
	void alimentarAnimal(string nombre) {
		bool encontrado = false;
		// Busca el animal en la lista por su nombre
		for (int i = 0; i < listaAnimal.size(); i++) {
			if (listaAnimal[i]->getNombre() == nombre) {
				encontrado = true;
				listaAnimal[i]->getCuidador()->alimentar(listaAnimal[i]);  // El cuidador del animal lo alimenta
				break;
			}
		}
		
		// Si no se encuentra el animal, muestra un mensaje de error
		if (!encontrado) {
			cout << "Animal no encontrado" << endl;
		}
	}
	
	// M�todo para alimentar a todos los animales usando un cuidador
	void alimentarAnimales(Cuidador* cuidador) {
		cuidador->alimentar(listaAnimal);  // El cuidador alimenta a todos los animales en la lista
	}
	
	// M�todo para obtener la lista de animales
	vector<Animal*> getAnimales() {
		return listaAnimal;
	}
	
	// M�todo para imprimir los sonidos que hacen todos los animales en el contenedor
	void imprimirSonidos() {
		for (int i = 0; i < listaAnimal.size(); i++) {
			listaAnimal[i]->hacerSonido();  // Llama al m�todo hacerSonido de cada animal
		}
	}
	
	// M�todo para imprimir la informaci�n de todos los animales en el contenedor
	void imprimirAnimales() {
		for (int i = 0; i < listaAnimal.size(); i++) {
			cout << listaAnimal[i]->animalesToString();  // Imprime la informaci�n de cada animal usando su m�todo toString
		}
	}
};

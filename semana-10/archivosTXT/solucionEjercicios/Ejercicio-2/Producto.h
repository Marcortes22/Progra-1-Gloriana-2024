
class Producto {
	
private:
	int id;
	string nombre;
	int cantidad;

public:
void agregarProducto() {
	ofstream archivo("inventario.txt", ios::app);
	Producto producto;
	
	cout << "Ingrese ID: ";
	cin >> producto.id;
	cout << "Ingrese nombre: ";
	cin >> producto.nombre;
	cout << "Ingrese cantidad en stock: ";
	cin >> producto.cantidad;
	
	archivo << producto.id << " " << producto.nombre << " " << producto.cantidad << endl;
	archivo.close();
}

void mostrarProductos() {
	ifstream archivo("inventario.txt");
	char line[128] ;
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo."<<endl;
	}else{
		while(!archivo.eof()){ 
			archivo.getline(line, sizeof(line));
			cout<<line<<endl;
		}
	
	archivo.close();
}
}

void actualizarCantidad() {
	ifstream archivo("inventario.txt");
	ofstream archivoTemp("temp.txt");
	int id, cantidad;
	string nombre;
	int idBuscar, nuevaCantidad;
	
	cout << "Ingrese el ID del producto a actualizar: ";
	cin >> idBuscar;
	cout << "Ingrese la nueva cantidad: ";
	cin >> nuevaCantidad;
	
	while (archivo >> id >> nombre >> cantidad) {
		if (id == idBuscar) {
			archivoTemp << id << " " << nombre << " " << nuevaCantidad << endl;
		} else {
			archivoTemp << id << " " << nombre << " " << cantidad << endl;
		}
	}
	
	archivo.close();
	archivoTemp.close();
	remove("inventario.txt");
	rename("temp.txt", "inventario.txt");
}

};

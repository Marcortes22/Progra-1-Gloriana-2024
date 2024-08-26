
class Paciente{
	
private:
	int Id;
	string Nombre;
	int Edad;
	string Diagnostico;
	bool Estado;
	
public:
	Paciente(int Id, string Nombre, int Edad, string Diagnostico){
		this->Id = Id;
		this->Nombre = Nombre;
		this->Diagnostico = Diagnostico;
		this->Estado = true;
	}
	
	Paciente(){
		this->Id = 0;
		this->Nombre = "";
		this->Edad = 0;
		this->Diagnostico = "";
		this->Estado = true;
	}
	
	void setId(int Id){
		this->Id = Id;
	}
		
	void setNombre(string Nombre){
		this->Nombre = Nombre;
	}
	
	void setEdad(int Edad){
		this->Edad = Edad;
	}
		
	void setDiagnostico(string Diagnostico){
		this->Diagnostico = Diagnostico;
	}
		
	void setEstado(bool Estado){
		this->Estado = Estado;
	}
		
	int getId(){
		return this->Id;
	}
			
	string getNombre(){
		return this->Nombre;
	}
		
	int getEdad(){
		return this->Edad;
	}

	string getDiagnostico(){
		return this->Diagnostico;
	}
	
	bool getEstado(){
		return this->Estado;
	}
	
	void toString(){
		cout<<"Id: "<<Id
			<<"\nNombre: "<<Nombre
			<<"\nEdad: "<<Edad
			<<"\nDiagnostico: "<<Diagnostico
			<<"\nEstado: ";
		
		if(Estado){
			cout<<"Internado";
		}else{
			cout<<"Dado de alta";
		}
		
		cout<<"\n-------------------------------\n";
	}
		
		
		
};

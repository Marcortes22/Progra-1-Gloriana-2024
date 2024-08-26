#include"Paciente.h"

class ListaPacientes{
	
private:
	
	const static int TAM = 50;
	Paciente VectorPaciente[TAM];
	int Cantidad;
	
public:
	
	ListaPacientes(){
		this->Cantidad = 0;
	}
	
	
	void setAddPaciente(Paciente nuevoPaciente){
		
		if(Cantidad < 50){
			
			if(verificarCedula(nuevoPaciente.getId())){
				
				cout<<"Ya existe un requistro con ese numero de cedula!!";
				
			}else{
				
				VectorPaciente[Cantidad] = nuevoPaciente;
				Cantidad++;
			}
			
			
		}else{
			cout<<"El vector ya está lleno";
		}
	}
		
	bool verificarCedula(int Id){
		
		bool IdRepetido = false;
		
		for(int i = 0; i < Cantidad; i++){
			
			if(VectorPaciente[i].getId() == Id){
				
				IdRepetido = true;
			}
		}
		
			
		return IdRepetido;
	}
	
	
	void getListPacientes(){
		for(int i = 0; i < Cantidad; i++){
			VectorPaciente[i].toString();
		}
	}
		
	void setUpdatePaciente(int Id){
		
		string nombre = "",  diagnostico = "";
		int edad = 0;
		int internado;
		bool encontrado = false;
		
		for(int i = 0; i < Cantidad; i++){
			//->2
			if(VectorPaciente[i].getId() == Id){
				encontrado = true;
				//logica para guardar los nuevos campos
				cout<<"Ingrese el nuevo nombre del paciente: ";
				cin>>nombre;
				cin.ignore();
				
				cout<<"Ingrese el nuevo diagnostico del paciente: ";
				getline(cin, diagnostico);
				
				
				cout<<"Ingrese la nueva edad del paciente: ";
				cin>>edad;
				
				cout<<"1.Internado \n0.Dado de alta";
				cin>>internado;
				
				//logica para editar los campos de mi paciente
				
				VectorPaciente[i].setNombre(nombre);
				VectorPaciente[i].setDiagnostico(diagnostico);
				VectorPaciente[i].setEdad(edad);
				VectorPaciente[i].setEstado(internado);
				
				cout<<"El paciente fue editado exitosamente!!!";
		
				break;
				
			}
		}
		
		if(!encontrado){
			cout<<"No se encontró el paciente";
		}
	}
		
		
		
		
	void getSearchPaciente(int Id){
		
		bool encontrado = false;
		
		for(int i = 0; i < Cantidad; i++){
			
			if(VectorPaciente[i].getId() == Id){
				
				encontrado = true;
				
				VectorPaciente[i].toString();
				
				break;
				
			}
		}
		if(!encontrado){
			cout<<"No se encontró el paciente";
		}
	}
		
	void getPromedioEdad(){
		
		int sumatoriaEdad = 0, cantidadEdades = 0;
		
		for(int i = 0; i < Cantidad; i++){
			
			sumatoriaEdad += VectorPaciente[i].getEdad();
			cantidadEdades++;
			
		}
		
		cout<<"Ël promedio de edades de los pacientes es: "<<sumatoriaEdad/cantidadEdades;
		
		
	}
		
		
	void getEstadoInternacion(){
		
		int nAlta =0, nInternados = 0;
		
		for(int i = 0; i < Cantidad; i++){
			
			if(VectorPaciente[i].getEstado() == 1){
				nInternados++;
			}else{
				nAlta++;
			}
			
		}
		
		cout<<"Pacientes internados: "<<nInternados
			<<"Pacientes dados de alta: "<<nAlta;
	}
		

};

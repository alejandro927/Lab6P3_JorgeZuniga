#include "Directorio.h"

Directorio::Directorio(string nombre,string autor,FileSystemNode* file) : FileSystemNode(nombre,autor,file) {

}


string Directorio::toString() {
	return "Casi se logra :v";
}

void Directorio::imprimirRecursivo(int valor) {
	
	
}

void Directorio::agregarArchivo(FileSystemNode* file) {
	hijos.push_back(file);
}

void Directorio::agregarDirectorio(FileSystemNode* file) {
	hijos.push_back(file);
}

void Directorio::buscarPorNombre(string cadena) {
	/*
	//va encontrando las pelis
	for(int i=0 ; i < hijos.size() ; i++) {

		string aux ="";
		this->(Directorio)hijos[i]->nombre;
		//valida  si al;guna pelicula comple con la cadena solicitada
		if(aux.find(cadena) != string::npos){
			cout<< p->getTitulo()<< " - "<< p->getDirector() << " - " << p->getGenero() << " - " <<p->getValoracion()<<"/5"<<endl;
		}
	}
	*/
}

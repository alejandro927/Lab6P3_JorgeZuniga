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
	string aux = "";
	//va encontrando las pelis
	for(int i=0 ; i < hijos.size() ; i++) {
		FileSystemNode* file = hijos[i];
		aux = file->getnombre();

		if(aux.find(cadena) != string::npos) {
			cout << "Autor: "<< file->getAutor() << " Nombre: "<< file->getnombre();
		}
	}

}

#include "Directorio.h"

Directorio::Directorio(string nombre,string autor,FileSystemNode* file) : FileSystemNode(nombre,autor,file){
	
}


string Directorio::toString(){
	return "Casi se logra :v";
}

void Directorio::imprimirRecursivo(int valor){
	
}

void Directorio::agregarArchivo(FileSystemNode* file){
	hijos.push_back(file);
}

void Directorio::agregarDirectorio(FileSystemNode* file){
	
}

void Directorio::buscarPorNombre(string cadena){
	
}

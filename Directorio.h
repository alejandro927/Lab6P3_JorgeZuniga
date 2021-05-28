#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include "FileSystemNode.h"
#include <iostream>
#include <vector>

class Directorio : public FileSystemNode {
	public:
		Directorio(); //heredar los 3 datos de FileSystemNode en el cpp
		string toString();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		
	protected:
		vector <FileSystemNode*> hijos;

};

#endif
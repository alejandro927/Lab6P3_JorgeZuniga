#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include "FileSystemNode.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Directorio : public FileSystemNode {
	public:
		Directorio(string,string,FileSystemNode*); //heredar los 3 datos de FileSystemNode en el cpp
		string toString();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		
	protected:
		vector <FileSystemNode*> hijos;

};

#endif
#ifndef DIRECTORIO_H
#define DIRECTORIO_H
#include "FileSystemNode.h"
#include "CPP.h"
#include "PPT.h"
#include "JPG.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Directorio : public FileSystemNode {
	public:
		Directorio(string,string,FileSystemNode*); 
		string toString();
		void imprimirRecursivo(int);
		void agregarArchivo(FileSystemNode*);
		void agregarDirectorio(FileSystemNode*);
		void buscarPorNombre(string);
		string getNombre();
		
	protected:
		vector < FileSystemNode* > hijos;
		
};

#endif
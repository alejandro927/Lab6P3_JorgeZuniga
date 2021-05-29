#ifndef ARCHIVO_H
#define ARCHIVO_H
#include "FileSystemNode.h"
#include <iostream>
#include <string>
using namespace std;
class Archivo : public FileSystemNode {
	public:
		Archivo(string,string,FileSystemNode*); 
		virtual string toString() = 0;
	protected:
};

#endif
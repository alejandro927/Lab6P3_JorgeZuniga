#ifndef JPG_H
#define JPG_H

#include "Archivo.h"
#include <iostream>
#include <string>
using namespace std;

class JPG : public Archivo {
	public:
		JPG(bool,string,double,double,string,string, FileSystemNode*);
		string toString();
	protected:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;


};

#endif
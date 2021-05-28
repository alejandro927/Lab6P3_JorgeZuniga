#ifndef JPG_H
#define JPG_H

#include "Archivo.h"

class JPG : public Archivo
{
	public:
		JPG(bool,string,double,double);
		string toString();
	protected:
		bool conFlash;
		string resolucion;
		double largo;
		double ancho;
		
		
};

#endif
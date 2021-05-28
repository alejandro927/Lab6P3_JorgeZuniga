#ifndef CPP_H
#define CPP_H

#include "Archivo.h"

class CPP : public Archivo
{
	public:
		CPP(int, int);//heredo del padre 
		string toString(); 
	protected:
		int lineasCodigo;
		int numErrores;
};

#endif
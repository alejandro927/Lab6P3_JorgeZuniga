#ifndef PPT_H
#define PPT_H
#include "Archivo.h"

class PPT : public Archivo
{
	public:
		PPT(string, int, int, bool);
		string toString();
		
	protected:
		string titulo;
		int numSlides;
		int numPlantilla;
		bool tieneAnimaciones; 
};

#endif
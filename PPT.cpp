#include "PPT.h"
PPT::PPT(string tit, int numSl, int numPlant, bool tieneAni,string nombre,string autor,FileSystemNode* file) : Archivo(nombre,autor,file){
	this->titulo = tit;
	this->numSlides = numSl;
	this->numPlantilla = numPlant;
	this->tieneAnimaciones = tieneAni;
}

string PPT::toString(){
	
}
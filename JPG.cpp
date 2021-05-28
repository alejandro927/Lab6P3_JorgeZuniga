#include "JPG.h"

JPG::JPG(bool cnFlash,string resul,double larg,double anch,string nombre,string autor,FileSystemNode* file) : Archivo(nombre,autor,file){
	this->conFlash = cnFlash;
	this->resolucion = resul;
	this->largo = larg;
	this->ancho = anch;
}

string JPG::toString(){
	
}
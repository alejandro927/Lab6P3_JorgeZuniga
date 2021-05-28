#include "CPP.h"

CPP::CPP(int lC,int nE,string nombre,string autor,FileSystemNode* file) : Archivo(nombre,autor,file){
	this->lineasCodigo = lC;
	this->numErrores = nE;
}

string CPP::toString(){
	cout<<this->nombre<<" - "<<this->autor<<" - "<<this->padre<<" - "<<this->lineasCodigo<<" - "<<this->numErrores;
}
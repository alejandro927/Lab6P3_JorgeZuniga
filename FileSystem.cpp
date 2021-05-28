#include "FileSystem.h"
FileSystem::FileSystem(){
	this->root = new Directorio("Root","Jorge",NULL);
}

Directorio* FileSystem::getRoot(){
	return this->root;
}
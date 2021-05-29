#include "FileSystem.h"

FileSystem::FileSystem() {
	this->root = new Directorio("Inicio", "Jorge",NULL);
}

Directorio* FileSystem::getRoot() {
	return this->root;
}
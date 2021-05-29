#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string n,string a, FileSystemNode* f) {
	this->nombre = n;
	this->autor = a;
	this->padre = f;
}

string FileSystemNode::getAutor() {
	return this->autor;
}

string FileSystemNode::getnombre() {
	return this->nombre;
}

#include "FileSystemNode.h"

FileSystemNode::FileSystemNode(string n,string a, FileSystemNode* f){
	this->nombre = n;
	this->autor = a;
	this->padre = f;
}
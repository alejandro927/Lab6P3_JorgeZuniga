#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include "Directorio.h"
class FileSystem
{
	public:
		FileSystem();
	protected:
		Directorio* root;
};

#endif
#include <iostream>
#include "FileSystem.h"
#include "Directorio.h"
#include <string>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu() {
	int opcion=0;
	cout<<"1) Imprimir FileSystem"<<endl;
	cout<<"2) Agregar Directorios"<<endl;
	cout<<"3) Agregar Archivos"<<endl;
	cout<<"4) Buscar por nombre"<<endl;
	cout<<"5) Salida"<<endl;
	cout<<"Elija su opcipon:";
	cin>>opcion;
	while(opcion < 0 || opcion > 5) {
		cout<<"\nEl numero ingresado no es valido; ingrese otro:";
		cin>>opcion;
	}
	return opcion;
}

int minimeniArchivo() {
	int opcion=0;
	cout<<"1) Archivo CPP"<<endl;
	cout<<"2) Archivo JPG"<<endl;
	cout<<"3) Archivo PPT"<<endl;
	cout<<"Elija su opcipon:";
	cin>>opcion;
	while(opcion < 0 || opcion > 3) {
		cout<<"\nEl numero ingresado no es valido; ingrese otro:";
		cin>>opcion;
	}
	return opcion;
}

int main(int argc, char** argv) {

	FileSystem* file = new FileSystem();
	file->getRoot()->agregarDirectorio(file->getRoot());

	Directorio* carpeta1 = new Directorio("Primera Carpeta","Jorge",file->getRoot());
	carpeta1->agregarArchivo(new CPP(100,20,"primer CPP","Jorge",file->getRoot()));
	carpeta1->agregarArchivo(new JPG(false,"alta",100.15,200.05,"primer JPG","Jorge",file->getRoot()));
	carpeta1->agregarArchivo(new PPT("TituloPPT1",20,15,true,"primer PPT","Jorge",file->getRoot()));

	Directorio* carpeta2 = new Directorio("Segunda Carpeta","Jorge",carpeta1);
	carpeta2->agregarArchivo(new CPP(200,25,"Segunda CPP","Jorge",carpeta1));
	carpeta2->agregarArchivo(new JPG(true,"baja",233.15,2000.05,"Segunda JPG","Jorge",carpeta1));
	carpeta2->agregarArchivo(new PPT("TituloPPT2",40,1,true,"Segunda PPT","Jorge",carpeta1));

	Directorio* carpeta3 = new Directorio("tercera Carpeta","Jorge",carpeta2);
	carpeta3->agregarArchivo(new CPP(840,0,"tercera CPP","Jorge",carpeta2));
	carpeta3->agregarArchivo(new JPG(true,"media",120.15,300.05,"tercera JPG","Jorge",carpeta2));
	carpeta3->agregarArchivo(new PPT("TituloPPT3",40,1,true,"tercera PPT","Jorge",carpeta2));




	int opcion=0;
	while(opcion != 5) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				cout<<"Se imprime el FileSystem"<<endl;
				Directorio* d;
				int profundidad=1;
				FileSystemNode* file;
				


				break;
				case 2: {

					cout<<"---Directorio---"<<endl;
					string nombre,autor;
					cout<<"Ingrese el nombre del autor: "<<endl;
					getline(cin,autor);
					getline(cin,autor);

					cout<<"Ingrese el nombre del archivo:"<<endl;
					getline(cin,nombre);
					getline(cin,nombre);


					//file->getRoot()->agregarDirectorio(new Directorio(nombre,autor,file->getRoot()));

				}
				break;
				case 3: {
					cout << "Agrega Archivos" << endl;
					int opcion=0;
					cout << "Elija que archivo desea agregar:";
					opcion = minimeniArchivo();
					switch(opcion) {
						case 1: {
							//CPP
							int linCod,numE;
							string nombre, autor;
							cout<<"---CPP---"<<endl;
							cout<<"Ingrese las lineas de codigo: "<<endl;
							cin>>linCod;
							cout<<"Ingrese el numero de errores: "<<endl;
							cin>>numE;
							cout<<"Ingrese el nombre del autor: "<<endl;
							cin>>autor;
							cout<<"Ingrese el nombre "<<endl;
							cin>>nombre;

						}
						break;
						case 2: {
							//JPG

						}
						break;
						case 3: {
							//PPT


						}
						break;
					}
				}
				break;
				case 4: {
					cout<<"Busca por nombre"<<endl;

				}
				break;
				case 5: {
					cout<<"Que tenga un buen dia!!";
				}
				break;
			}
		}
	}
	/*
	delete carpeta1;
	delete carpeta2;
	delete carpeta3;*/
	return 0;
}
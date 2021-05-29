#include "FileSystem.h"
#include "Directorio.h"
#include <iostream>
#include <string>
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

    Directorio* carpeta1 = new Directorio("Root 1","Jorge",file->getRoot());
    carpeta1->agregarArchivo(new CPP(10,40,"CPP1","Jorge",file->getRoot()));
    carpeta1->agregarArchivo(new JPG(false,"70",1063.6,190.16,"JPG1","Jorge",file->getRoot()));
    carpeta1->agregarArchivo(new PPT("archivo1",8,1,true,"PPT1","Jorge",file->getRoot()));


    Directorio* carpeta2 = new Directorio("Root 2","Jorge",carpeta1);
    carpeta2->agregarArchivo(new CPP(400,10,"CPP 2","Jorge",carpeta1));
    carpeta2->agregarArchivo(new JPG(true,"40",10.2,13.4,"JPG 2","Jorge",carpeta1));
    carpeta2->agregarArchivo(new PPT("archivo 2",12,2,false,"PPT2","Jorge",carpeta1));


    Directorio* carpeta3 = new Directorio("Root 3", "Jorge",carpeta2);
    carpeta3->agregarArchivo(new CPP(300,2,"CPP3","Jorge",carpeta2));
    carpeta3->agregarArchivo(new JPG(true,"40",50.3,50.5,"JPG 3","Jorge",carpeta2));
    carpeta3->agregarArchivo(new PPT("archivo 3",28,31,false,"PPT3","Jorge",carpeta2));

    carpeta1->agregarDirectorio(carpeta2);
    carpeta2->agregarDirectorio(carpeta3);




	int opcion=0;
	while(opcion != 5) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				cout<<"Se imprime el FileSystem"<<endl;

			}
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
	/*
	delete carpeta1;
	delete carpeta2;
	delete carpeta3;*/
}
#include <iostream>
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

int main(int argc, char** argv) {
	int opcion=0;
	while(opcion != 5) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				Cout<<"Se imprime el FileSystem"<<endl;
			}
			break;
			case 2: {
				
			}
			break;
			case 3: {
				
			}
			break;
			case 4: {
				
			}
			break;
			case 5: {
				cout<<"Que tenga un buen dia!!";
			}
			break;
		}
	}
	return 0;
}
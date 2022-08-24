#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int op;
	string menu="Menu\n 1°Imprimir\n 2° Imprimir: no te quiere\n 3°Salir\n";
	do{
		cout<<menu;
		cin>>op;
		switch(op){
		case 1:
			cout<<"Hola"<<endl;
			break;
		case 2:
			cout<<"no te quiere"<<endl;
			break;
		case 3:
			cout<<"ni queria quedarme"<<endl;
		}
	} while(op!=3);
	return 0;
}


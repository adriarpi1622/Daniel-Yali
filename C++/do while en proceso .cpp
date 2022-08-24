#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a; bool band=true;
		cout<<"Ingrese un numero"; cin>>a; cout<<endl;
		if(a>0);
		else{
			do{
				cout<<"Porfavor ingrese un numero mayor a 0: "; cin>>a;
				if(a>0) {getch(); band=false;}
				else{
					band=true;
				}
			}while(band==true);
		}
		cout<<"El numero ingresado es: "<<a;
	getch();
	return 0;
}

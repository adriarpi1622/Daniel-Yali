#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
		int opc; float resul,a,b;
		cout<<"-------BIENVENIDO A MI PRIMERA CALCULADORA-------\n";   //Aqui empieza el menú
		system("pause");
		system("CLS");			
		cout<<endl<<"\tMenú\n";
			cout<<"Seleccione la operación que desea realizar...\n";
			cout<<"1.Sumar\n2. Restar\n3. Multiplicación\n4. Division\n";
		cout<<"_______________________"<<endl;
		cout<<"Ingrese su opción: "<<endl; cin>> opc;    //usaremos opc para las opciones en la selección.
		cout<<"Ingrese el 1er valor:"; cin>>a;
		cout<<"Ingrese el 2do valor:"; cin>>b;
		//Se realiza las operaciones en seleccion multiple
		system("CLS");
		if(!(opc<=4&&opc>=1)){
			do{ system("ClS");
				cout<<"Lo sentimos, no ha ingresado una opción valida."; getch();
				cout<<"\nIntente nuevamente.\nIngrese el 1er valor:"; cin>>a;
				cout<<"\nIngrese el segundo valor:"; cin>>b;
			}while(!(opc<=4&&opc>=1));
		}
		
		switch(opc)
		{
		case 1: 
			resul= a + b;
			break;
		case 2:
			resul= a-b;
			break;
		case 3:
			resul= a*b;
			break;
		case 4:  if(b==0){do{
			cout<<"No se puede usar a 0 como divisor. Ingrese un nuevo valor:"; cin>>b;}
		while(b==0);}
			else resul= a/b;
			break;
		}
	cout<<"El resultado es: "<<resul<<endl; 
	return 0;
}

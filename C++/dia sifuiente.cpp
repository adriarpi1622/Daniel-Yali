#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int d,m,a; bool band=true;
	cout<<"Ingree el dia: "; cin>>d;
	cout<<"Ingree el mes: "; cin>>m;
	cout<<"Ingree el año: "; cin>>a;
	system("pause");
	system("CLS");
	switch(mes){
case 1: case 3: case 5: case 7: case 8: case 10: 	
	if(d==31){
		mes+=1; d=1;}
	else d+=1;
	break; //meses con 31 dias
case 4: case 6: case 9: case 9: case 12: 
	if(d==30){
		mes+=1; d=1;}
	else d+=1;
	break;		//meses con 30 dias
case 2: if(a%4==0 && a%100!=0 || a%400==0){
		if(d==29)
		{mes+=1; d=1;}}
else d+=1;
else {
	if(d==28){
		mes+=1; d=1;
	}
	else d+=1;
}
		   break; //febrero 28-29
	case 12:
		if(d==31){
			a+=1; d=1; m=1;}
		else d+=1;
default: cout<<"No ha introducido un valor correcto." ;
	band=false;}
 if()
return 0;
}


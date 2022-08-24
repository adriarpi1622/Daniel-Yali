#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
	char opc='s';
	do{int array[10],pos,n,nE,i; 
		cout<<"Ingrese cantidad de elementos menor a 10: ";
		cin>>n; 
			if(n>10){while(n>10){ 
		cout<<".:Ha ingresado un numero mayor a 10:."<<endl<<">>Ingrese la cantidad de elementos menor o igual a 10: "; cin>>n;
			}}
			if(n<1){while(n<1){
		cout<<".:Ha ingresado un numero menor a 1:."<<endl<<">>Ingrese la cantidad de elementos mayor o igual a 1: "; cin>>n;
			}}
		for(i=0;i<n;i++){
		cout<<"Elemento ["<<i<<"]: ";
		cin>>array[i];
		}
		i=n;
		do{cout<<"Ingrese un nuevo elemento: ";
		cin>>nE;
		do{
			cout<<"Ingrese posicion: ";
			cin>>pos;
		}while(pos>i);
		i++;
		if(pos != i+1){
			for(int j=9;j>pos;j--){
				array[j] = array[j-1];
			}
			}
		array[pos] = nE; 
		for(int k=0;k<i;k++){
			cout<<"Elemento ["<<k<<"]: ";
			cout<<array[k]<<endl;
		}}while(i<10); cout<<endl<<"El arreglo esta lleno.\n¿Desea volver a ejecutar el programa?(s/n): "; cin>>opc;
		opc=toupper(opc);
}while(opc=='s');
	
	return 0;
	
}


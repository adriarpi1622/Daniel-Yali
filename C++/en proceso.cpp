#incluide <iostream>
#incluide <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c; char i; bool band=true;
	cout<<"\t----BIENVENIDO A MI PRIMERA CALCULADORA----\n"; getch();
	cout<<"\nINGRESE UN NUMERO: "; cin>>a;
	if(a>=0 || a<=0)
		getch();
	else{
		band=false;
		do{
			cout<<"UD. NO HA INGRESADO UN NÚMERO.\nPorfavor Ingrese un Número: "; cin>>a; 
			if(a>=0 || a<=0) band=true;
		} while(band==true);}
	cout<<"\nINGRESE UN NUMERO: "; cin>>b;
	cout<<endl<<"_______________________________________________\nELIJA LA OPERACION QUE DESEA REALIZAR\n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n_______________________________________________";
	cout<<endl<<"INRESE UNA OPCION: "; cin>>i;
	switch(i){
	case '1': c=a+b; break;
	case '2': c=a-b; break;
	case '3': c=a*b; break;
	case '4': if(b==0){
		cout<<"\nNO SE PUEDE DIVIDIR ENTRE CERO"; band= false;}
		else{ c=a/b;}	break; 
 default: cout<<"\n\nLO SENTIMOS UD. NO HA INGRESADO UNA OPCION COREECTA\n"; getch(); band=false;}
	if(band==true)
		   cout<<"\n_______________________________________________\nEL RESULTADO DE LA OPERACION ES: "<<c;
	else cout<<"\n----------------------------SALIENDO DEL PROGRAMA----------------------------";
	getch();
	return 0;
}

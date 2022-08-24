#include <iostream> 
using namespace std;

int main(int argc, char *argv[]) {
	char dia;
	float dsc,precio,precioTotal;
	cout<<"Ingrese el dia"<<endl;
	cin>>dia;
	cout<<"Ingrese el precio"<<endl;
	cin>>precio;
	//AQUI USAMOS switch
		switch(dia)
		{
		case 'm':
			dsc=precio*0.1;
			break;
		case 'j':
			dsc=precio*0.05;
			break;
		case 's':
			dsc=precio*0.2;
			break;
		default:
			cout<<" No hay descuento."<<endl;
}
		precioTotal=precio-dsc;
	cout<<"...................................."<<endl;
	cout<<"Precio total: "<<precioTotal<<endl;
	return 0;
}

#include <iostream> 
#include <cmath>   // por uso de pow( ) potencia
using namespace std;

int main() {
	float n1,n2,r;
	char op;//r es doble por uso de de pow( )
	cout<<"Ingrese primer numero:"; cin>>n1;
	cout<<"Ingrese segundo numero:"; cin>>n2;
	cout<<endl;
	cout<<endl;
	cout<<"MENU"<<endl;
	cout<<"____________"<<endl;
	cout<<"Eliga su operador"<<endl;
	cout<<"................."<<endl;
	cout<<"+(suma),-(resta),*(multiplicacion),/(division),#(potencia)"<<endl; cin>>op;
	cout<<"................."<<endl;
		switch(op)
{
		case '+': r =n1+n2;
		break;
		case '-': r =n1-n2;
		break;
		case '*': r =n1*n2;
		break;
		case '/': r =n1/n2;
		break;
		case '#': r =pow(n1,n2);
		break;
		default: cout<<"operador no definido"<<endl;
}
	cout<<"El resultado es:"<<endl;
	cout<<"_____"<<r<<"_____"<<endl;
	system("pause");
	return 0;
}	

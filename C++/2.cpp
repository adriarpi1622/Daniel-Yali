#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,aux;
	a=15;
	b=10;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
		aux=b;
		b=a;
		a=aux;
	cout<<"<<<<<<<<<<<cambio>>>>>>>>>>"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}

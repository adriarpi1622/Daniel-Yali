#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,f=1;
	cout<<"Ingrese un numero: "; cin>>n;
	system("CLS");
	if(n<0) 
		cout<<"ha ingresado un numero incorrecto."<< endl;
	else{
		cout<<n<<"!= ";
		for( float i=n ;i>0;i--){
			f*=i;
			cout<<i;
			if(i==1) cout<<" = ";
			else cout<<" * ";
		}
		cout<<4f;
	}
	cout<<endl;
	system("pause");
	return 0;
}


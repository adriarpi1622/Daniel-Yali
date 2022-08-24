#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int op, op_hab, op_ali, op_tur; 
	float prec_hab, prec_ali, prec_tur, prec_total;
	cout<<"-------------Bienvenido a nuestro servicio de habitaciones-------------\nTe presentamos los siquientes paquetes de habitaciones\n___________________________________________\n";
	cout<<"\tPaquete 1:\nCantidad de personas:\t1\nEstadia:\t\t6 dias y 5 noches\nValor min.=S/.1000\nValor max.=S/.19000\n___________________________________________\n";
	cout<<"\tPaquete 2:\nCantidad de personas:\t4\nEstadia:\t\t6 dias y 5 noches\nValor min.=S/.4000\nValor max.=S/.76000\n___________________________________________\n";
	cout<<"\tPaquete 3:\nCantidad de personas:\t2\nEstadia:\t\t3 dias y 2 noches\nValor min.=S/.1000\nValor max.=S/.19000\n___________________________________________\n";
	cout<<"\tPaquete 4:\nCantidad de personas:\t2\nEstadia:\t\t6 dias y 5 noches\nValor min.=S/.2000\nValor max.=S/.38000\n___________________________________________\n";
	cout<<"Elija el paquete que desea: "; cin>>op; cout<<"___________________________________________\n";
	switch(op){
	case 1: cout<<"Ud. ha elegido el primer paquete.\nElija el tipo de habitación:\n1.Regular.\tS/.500\n2.Ejecutivo.\tS/.750\n3.Gold."<<"\tS/.1000\nIgrese su opcion: "; cin>>op_hab;
		switch(op_hab){
		case 1: prec_hab=500; break;
		case 2: prec_hab=750; break;
		case 3: prec_hab=1000; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de alimentacion.\n1.Menú ejecutivo.\tS/.200\n2.Menú buffet.\tS/.300\nIgrese su opcion: "; cin>>op_ali;
		switch(op_ali){
		case 1: prec_ali=200; break;
		case 2: prec_ali=300; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de atracciones turisticas.\n1.Basico.\tS/.300\n2.VIP.\tS/.600\nIgrese su opcion: "; cin>>op_tur;
		switch(op_tur){
		case 1: prec_tur=300; break;
		case 2: prec_tur=600; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		break;
	case 2: cout<<"Ud. ha elegido el segundo paquete.\nElija el tipo de habitación:\n1.Regular.\tS/.2000\n2.Ejecutivo.\tS/.3000\n3.Gold.\tS/.4000\nIgrese su opcion: "; cin>>op_hab;
		switch(op_hab){
		case 1: prec_hab=2000; break;
		case 2: prec_hab=3000; break;
		case 3: prec_hab=4000; break; 
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de alimentacion.\n1.Menú ejecutivo.\tS/.800\n2.Menú buffet.\tS/.1200\nIgrese su opcion: "; cin>>op_ali;
		switch(op_ali){
		case 1: prec_ali=800; break;
		case 2: prec_ali=1200; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de atracciones turisticas.\n1.Basico.\tS/.1200\n2.VIP.\tS/.2400\nIgrese su opcion: "; cin>>op_tur;
		switch(op_tur){
		case 1: prec_tur=1200; break;
		case 2: prec_tur=2400; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		break;
	case 3: cout<<"Ud. ha elegido el tercer paquete.\nElija el tipo de habitación:\n1.Regular.\tS/.500\n2.Ejecutivo.\tS/.750\n3.Gold.\tS/.1000\nIgrese su opcion: "; cin>>op_hab;
		switch(op_hab){
		case 1: prec_hab=500; break;
		case 2: prec_hab=750; break;
		case 3: prec_hab=1000; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de alimentacion.\n1.Menú ejecutivo.\tS/.200\n2.Menú buffet.\tS/.300\nIgrese su opcion: "; cin>>op_ali;
		switch(op_ali){
		case 1: prec_ali=200; break;
		case 2: prec_ali=300; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de atracciones turisticas.\n1.Basico.\tS/.300\n2.VIP.\tS/.600\nIgrese su opcion: "; cin>>op_tur;
		switch(op_tur){
		case 1: prec_tur=300; break;
		case 2: prec_tur=600; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		break;
	case 4: cout<<"Ud. ha elegido el primer paquete.\nElija el tipo de habitación:\n1.Regular.\tS/.1000\n2.Ejecutivo.\tS/.1500\n3.Gold.\tS/.2000\nIgrese su opcion: "; cin>>op_hab;
		switch(op_hab){
		case 1: prec_hab=1000; break;
		case 2: prec_hab=1500; break;
		case 3: prec_hab=2000; break; 
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de alimentacion.\n1.Menú ejecutivo.\tS/.400\n2.Menú buffet.\tS/.600\nIgrese su opcion: "; cin>>op_ali;
		switch(op_ali){
		case 1: prec_ali=400; break;
		case 2: prec_ali=600; break; 
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		cout<<"___________________________________________\nElija el tipo de atracciones turisticas.\n1.Basico.\tS/.600\n2.VIP.\tS/.1200\nIgrese su opcion: "; cin>>op_tur;
		switch(op_tur){
		case 1: prec_tur=600; break;
		case 2: prec_tur=1200; break;
		default: cout<<"Lo sentimos, ha elegido una opción invalida";}
		break;
	default: cout<<"Lo sentimos, ha elegido una opción invalida";}
	system("pause");
	prec_total=prec_hab+prec_ali+prec_tur;
	cout<<"EL MONTO TOTAL ES:S/."<<prec_total;
	return 0;
}


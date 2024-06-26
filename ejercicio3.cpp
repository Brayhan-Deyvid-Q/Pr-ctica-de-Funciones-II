#include<iostream>
#include<cmath>
using namespace std;

int main (){
	double cat1, cat2, h;
	cout<<"Ingrese el valor del primer cateto: ";
	cin>>cat1;
	cout<<"Ingrese el valor del segundo cateto: ";
	cin>>cat2;
	h=sqrt(pow(cat1,2)+pow(cat2,2));
	cout<<"El valor de la hipotenusa es: "<<h<<endl;
	return 0;
}
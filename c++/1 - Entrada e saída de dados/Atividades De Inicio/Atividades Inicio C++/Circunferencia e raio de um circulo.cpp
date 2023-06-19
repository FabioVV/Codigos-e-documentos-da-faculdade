#include <iostream>
#include <cmath>

using namespace std;

main(){
	
	float raio, pi;
	float conta;
	
	pi = 3.1415926535;
	/*
	cout<<"Para calcular o comprimento da circunferencia...."<<endl;
	cout<<"\n";
	cout<<"Digite o raio do circulo: ";
	cin>>raio;
	
	conta = 2*pi*raio;
	cout<<"Resultado: "<<conta <<"cm" <<endl;

	
	cout<<"\n";
	conta = 0;
	raio = 0;
	*/
	cout<<"Para calcular a area da circunferencia...."<<endl;
	cout<<"\n";
	cout<<"Digite o raio do circulo: ";
	cin>>raio;
	
	conta = pi*pow(raio,2);
	cout<<"Resultado: " <<conta <<"m2" <<endl;
	
	cout<<"\n";
	system("pause");
	
	
}

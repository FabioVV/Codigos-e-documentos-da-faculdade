#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double dolar, dolar_cot, real;
	
	cout <<"Digite a cota��o do d�lar: ";
	cin >>dolar_cot;
	
	cout <<"Digite a quantidade de d�lares: ";
	cin >>dolar;
	
	real = dolar_cot * dolar;
	
	cout<<""<<endl;
	cout <<"Em reais o valor �: "<<"R$"<<real;
	cout<<""<<endl;
	
	system("pause");
	
}

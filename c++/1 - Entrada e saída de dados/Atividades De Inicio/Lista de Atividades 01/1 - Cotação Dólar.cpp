#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double dolar, dolar_cot, real;
	
	cout <<"Digite a cotação do dólar: ";
	cin >>dolar_cot;
	
	cout <<"Digite a quantidade de dólares: ";
	cin >>dolar;
	
	real = dolar_cot * dolar;
	
	cout<<""<<endl;
	cout <<"Em reais o valor é: "<<"R$"<<real;
	cout<<""<<endl;
	
	system("pause");
	
}

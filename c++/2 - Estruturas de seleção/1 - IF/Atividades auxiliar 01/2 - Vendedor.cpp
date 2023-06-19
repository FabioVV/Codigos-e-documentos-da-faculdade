#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario, vendas;
	
	cout<<"Digite o valor de vendas do mês: ";
	cin>>vendas;
	
	if(vendas >= 20000){
		salario = vendas * 0.10;
	} else if(vendas < 20000){
		salario = vendas * 0.075;
	}
	
	
	cout<<"Salário do funcionário: "<<salario<<"R$"<<endl;
	
	
	system("pause");
}

#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	double salario_bruto, previdencia, imposto_renda;
	double conta;
	
	previdencia = 0.10;
	imposto_renda = 0.25;
	
	cout <<"Digite o nome do funcionário: ";
	cin >>nome;
	cout <<"Digite o salário bruto do funcionário: ";
	cin >>salario_bruto;
	cout<<""<<endl;
	
	conta = (salario_bruto * previdencia) + salario_bruto;
	conta = (salario_bruto * imposto_renda) + salario_bruto;
	//conta = (salario_bruto * previdencia) + salario_bruto;
	//conta *= (imposto_renda + salario_bruto;
	
	cout <<"----------------Dados do funcionário----------------"<<endl;
	cout <<"Nome do funcionário: "<<nome<<endl;
	cout <<"Salário bruto: "<<"R$"<<salario_bruto<<endl;
	cout <<"Salário liquido: "<<"R$"<<conta<<endl;
	cout <<"----------------Descontos do salário do funcionário----------------"<<endl;
	cout <<previdencia<<"% do salário bruto (previdência)"<<endl;
	cout <<imposto_renda<<"% do salário bruto (renda)"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	
	cout<<""<<endl;
	system("pause");
}

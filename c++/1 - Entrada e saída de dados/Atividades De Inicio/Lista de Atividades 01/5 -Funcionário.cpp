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
	
	cout <<"Digite o nome do funcion�rio: ";
	cin >>nome;
	cout <<"Digite o sal�rio bruto do funcion�rio: ";
	cin >>salario_bruto;
	cout<<""<<endl;
	
	conta = (salario_bruto * previdencia) + salario_bruto;
	conta = (salario_bruto * imposto_renda) + salario_bruto;
	//conta = (salario_bruto * previdencia) + salario_bruto;
	//conta *= (imposto_renda + salario_bruto;
	
	cout <<"----------------Dados do funcion�rio----------------"<<endl;
	cout <<"Nome do funcion�rio: "<<nome<<endl;
	cout <<"Sal�rio bruto: "<<"R$"<<salario_bruto<<endl;
	cout <<"Sal�rio liquido: "<<"R$"<<conta<<endl;
	cout <<"----------------Descontos do sal�rio do funcion�rio----------------"<<endl;
	cout <<previdencia<<"% do sal�rio bruto (previd�ncia)"<<endl;
	cout <<imposto_renda<<"% do sal�rio bruto (renda)"<<endl;
	cout <<"----------------------------------------------------"<<endl;
	
	cout<<""<<endl;
	system("pause");
}

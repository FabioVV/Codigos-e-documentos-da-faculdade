#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mes_nasc, mes;
	int ano_nasc, ano;
	int conta;
	int ano_atual;
	
	ano_atual = 2021;
	mes = 30;
	ano = 360;
	
	cout<<"Digite o número do mês de nascimento:";
	cin >>mes_nasc;
	cout<<"Digite o número do ano de nascimento:";
	cin >>ano_nasc;
	                              
	conta = (mes_nasc * mes) + ((ano_atual- ano_nasc) * ano);
	 
	cout<<""<<endl;
	cout<<"A pessoa viveu um total de: "<<conta<<" dias";
	
	cout<<""<<endl;
	system("pause");
}

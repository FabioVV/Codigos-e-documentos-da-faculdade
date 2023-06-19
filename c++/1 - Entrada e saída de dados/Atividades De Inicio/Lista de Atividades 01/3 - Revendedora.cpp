#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*Professor, a comissão desta atividade eu não entendi muito bem como era para calcular
	Esses 5% entrariam aonde na conta? eu fiz no total, sei que está errado mas não sei onde colocar
	*/
	
	double sal_fixo ,comissao_car ,comissao_sell, total;
	int car_quant;
	string nome;
	
	sal_fixo = 350.00;
	comissao_car = 50.00;
	comissao_sell = 0.05; 
	
	cout <<"Digite o nome do vendedor: ";
	cin >>nome;
	cout <<"Digite a quantidade de carros vendidos: ";
	cin >>car_quant;
	
	total = (car_quant * comissao_car);
	total += sal_fixo;
	total = total * comissao_sell + total;

    cout <<"=========Tabela========="<<endl;	
    cout <<"Nome do vendedor: "<<nome<<endl;
    cout <<"Quantidade de carros vendidos: "<<car_quant<<endl;
    cout <<"Salário Total: "<<"R$"<<total<<endl;
    
    cout <<""<<endl;
	system("pause");
}

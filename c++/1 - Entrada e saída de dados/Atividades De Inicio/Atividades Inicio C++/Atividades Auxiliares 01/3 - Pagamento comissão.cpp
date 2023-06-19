#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL,"Portuguese");
	
	string iden_seller;
	double price_unit_peca, quant_sold;
	double conta,comissao;
	
	cout <<"Nome do vendedor: ";
	cin >> iden_seller;
	
	cout << "" <<endl;
	
	cout <<"Preço unitária das peças: ";
	cin >> price_unit_peca;
	
	cout << "" <<endl;
	
	cout <<"Quantidade de peças que foram vendidas: ";
	cin >> quant_sold;
	
	cout << "" <<endl;

	conta = (price_unit_peca * quant_sold);
	comissao = conta * 0.05;
	
	cout <<"-------------------------------------------------"<<endl;
	cout <<""<<endl;
	cout <<"==========Dados do vendedor========== "<<endl;
	cout <<"Nome:"<<iden_seller<<endl;
	cout <<"Quantidade de peças vendidas: "<<quant_sold<<endl;
	cout <<"Preço dessas peças: "<<price_unit_peca<<"R$"<<endl;
	cout <<"Preço total da compra: "<<conta<<"R$"<<endl;
	cout <<"comissão de 5%, ao vendedor: "<< comissao <<"R$"<<endl;
	cout <<""<<endl;
	cout <<"==========Fim dos Dados do vendedor========== "<<endl;
	cout <<""<<endl;
	cout <<"-------------------------------------------------"<<endl;
	
	
	
	system("pause");
	return 0;
}

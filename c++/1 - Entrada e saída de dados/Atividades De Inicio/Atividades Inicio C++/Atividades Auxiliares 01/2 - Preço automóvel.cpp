#include <iostream>


using namespace std;

 main(){
	
	setlocale (LC_ALL,"Portuguese");
	
	float custo_fab;
	float preco_final;
	float imposto, comissao;
	
	cout<<"Informe o custo de f�brica: ";
	cin>> custo_fab;
	
	imposto = custo_fab * 0.45;
	comissao = custo_fab * 0.1;
	preco_final = custo_fab + imposto + comissao;
	cout<<""<<endl;
	
	cout<<"====================================================="<<endl;
	cout<<"O total de imposto foi: " <<imposto <<"R$" <<endl;
	cout<<"Comiss�o de venda do vendedor: " <<comissao <<"R$" <<endl;
	cout<<""<<endl;
	cout<<"O pre�o final do autom�vel foi: " <<preco_final <<"R$" <<endl;
	cout<<"====================================================="<<endl;
	
	
	system("pause");
	return 0;
}

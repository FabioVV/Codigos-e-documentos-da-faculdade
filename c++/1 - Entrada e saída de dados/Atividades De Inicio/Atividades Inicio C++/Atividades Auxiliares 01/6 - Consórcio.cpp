#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL,"Portuguese");
	
	int total_prestacoes,prestacoes_pagas;
	float valor_prestacao,total_pago, saldo_devedor;
	
	cout <<"Informe o total de presta��es: ";
	cin >> total_prestacoes;
	cout <<"Informe o total de presta��es pagas: ";
	cin >> prestacoes_pagas;
	cout <<"Informe o valor da presta��o: ";
	cin >> valor_prestacao;
	
	cout <<""<<endl;
	
	total_pago = prestacoes_pagas * valor_prestacao;
	saldo_devedor = (total_prestacoes - prestacoes_pagas) * valor_prestacao;
	//saldo_devedor = (total_prestacoes * valor_prestacoes) - total_pago;
	
	cout <<"=============================="<<endl;
	cout <<"Total Presta��es: "<< total_prestacoes<<endl;
	cout <<"Valor da presta��o: "<< valor_prestacao <<"R$"<<endl;
	cout <<"Total Presta��es pagas: "<< prestacoes_pagas<<endl;
	cout <<" "<<endl;
	cout <<"Total pago: "<< total_pago <<"R$"<<endl;
	cout <<"Saldo devedor: "<< saldo_devedor <<"R$"<<endl;
	cout <<"=============================="<<endl;
	
	system("pause");
	return 0;
}

#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome, desc_tipo, desc_plano;
	float valor_total,valor_plano, valor_locais, valor_sms, valor_tipo_cliente,valor_ddd,valor_ddi; 
	int tipo_cliente, total_sms, total_locais, total_ddd, total_ddi, tipo_plano;
	
	cout <<"Informe o nome: ";
	cin >> nome;
	cout <<"Tipo cliente (1-Pessoal / 2-Corporativo): ";
	cin >> tipo_cliente;
	cout <<"Total de mensagems: ";
	cin >> total_sms;
	cout <<"Informe o total de minutos em chamadas locais: ";
	cin >> total_sms;
	cout <<"Informe o total de minutos em chamadas DDD: ";
	cin >> total_ddd;
	cout <<"Informe o total de minutos em chamadas DDI: ";
	cin >> total_ddi;
	cout <<"Informe o plano de dados (1- 5gb, 2- 10gb, 3- ilimitado ) ";
	cin >> tipo_plano;
	
	//Tipo cliente
	if(tipo_cliente == 1){
		valor_tipo_cliente = 15;
		desc_tipo = "Cliente Pessoal"; 
	} else if(tipo_cliente == 2){
		valor_tipo_cliente = 25;
		desc_tipo = "Cliente Corporativo"; 
	} else {
		valor_tipo_cliente = 0;
		desc_tipo = "Tipo de cliente inválido."; 
	}
	
	//Valor sms
	if(total_sms <= 100){
		valor_sms = total_sms * 0.15;
	} else {
		valor_sms = total_sms * 0.25;
	}
	
	//Valor ligações locais
	if(total_locais <= 100){
		valor_locais = 0;
	} else if (total_locais <= 250){
		valor_locais = total_locais * 0.2;
	} else{
		valor_locais = total_locais * 0.29;
	}
	
	//Tipo de plano
	if(tipo_plano == 1){
		valor_plano = 20;
		desc_plano = "Pacote 10GB";
	} else if(tipo_plano == 2){
		valor_plano = 30;
		desc_plano = "Pacote 30GB";
	} else if(tipo_plano == 3){
		valor_plano = 90;
		desc_plano = "Pacote ilimitado";
	} else {
		valor_plano = 0;
		desc_plano = "Sem pacote";
	}
	
	//Valor do ddd
	valor_ddd = total_ddd * 1.2;
	
	//Valor do ddi
	valor_ddi = total_ddi * 2.1;
	
	//Conta total
	valor_total = valor_tipo_cliente + valor_sms + valor_locais + valor_ddd + valor_ddi + valor_plano;
	
	cout<<""<<endl;
    cout<<"----------------Relatório----------------"<<endl;
    cout<<"Nome do Cliente: "<<nome<<endl;
    cout<<"Tipo do cliente: "<<desc_tipo<<endl;
    cout<<"Valor da linha: "<<valor_tipo_cliente<<"R$"<<endl;
    cout<<"Valor dos SMS: "<<valor_sms<<"R$"<<endl;
    cout<<"Total de minutos locais: "<<total_locais<<"R$"<<endl;
    cout<<"Valor de ligações locais: "<<valor_locais<<"R$"<<endl;
    cout<<"Total de minutos em ligações DDD: "<<total_ddd<<"R$"<<endl;
    cout<<"Total de minutos em ligações DDI: "<<valor_ddi<<"R$"<<endl;
    cout<<"Tipo de plano: "<<desc_plano<<endl;
    cout<<"Valor do plano: "<<valor_plano<<"R$"<<endl;
    cout<<"Valor total: "<<valor_total<<"R$"<<endl;
    cout<<"-----------------------------------------"<<endl;
	cout<<""<<endl;
	system("pause");
}

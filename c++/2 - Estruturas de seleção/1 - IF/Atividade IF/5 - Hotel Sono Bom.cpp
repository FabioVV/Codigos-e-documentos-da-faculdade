#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int reserva_num;
	string responsavel_reserva;
	int quantidade_hospedes;
	int tipo_quarto;
	int quant_diarias;
	double valor_consumido_frigobar;
	int numerode_massagens;
	double bar_valor;
	double conta = 0;
	
	
	double garcom_comissao = 1.10;
	double manut_frigo = 12.00;
	double iss = 1.05;
	double iss_cinco_dias = 1.03;
	double iss_dezoumaisdias = 1.01;
	
	double total_massagem;
	double total_frigobar;
	double total_bar;
	double valor_diarias;
	double iss_tot;
	
	cout<<"Digite o número da reserva: ";
	cin>>reserva_num;
	cout<<"Digite o responsável pela reserva: ";
	cin>>responsavel_reserva;
	cout<<"Digite a quantidade de hospedes... (1 - Casal, 2 - Família pequena (3 ou 4 pessoas), 3 - Família grande(acima de 5 pessoas) ): ";
	cin>>quantidade_hospedes;
	cout<<"Digite o tipo de quarto... (1 - Standard, 2 - Luxo, 3 - VIP): ";
	cin>>tipo_quarto;
	cout<<"Digite a quantidade de diárias: ";
	cin>>quant_diarias;
	cout<<"Digite o valor consumido no frigobar: ";
	cin>>valor_consumido_frigobar;
	cout<<"Digite o número de massagens utilizada pelo cliente... (Até 3 massagens: 80$ por cada uma, acima de 3 65$ por cada uma): ";
	cin>>numerode_massagens;
	cout<<"Digite o valor consumido no bar: ";
	cin>>bar_valor;
	
	if(quantidade_hospedes == 1){
		conta += 0; 
	} else if(quantidade_hospedes == 2){
		conta += quant_diarias * 20.00;
		
		//somente para imprimir do final
		valor_diarias = quant_diarias * 20.00;
		//somente para imprimir do final
		
	} else if(quantidade_hospedes == 3){
		conta += quant_diarias * 40.00;
		
		//somente para imprimir do final
		valor_diarias = quant_diarias * 40.00;
		//somente para imprimir do final
	} else {
		cout<<"Número inválido!!!";
		return 0;
	}
	
	if(tipo_quarto == 1){
		conta += quant_diarias * 50.00;
		
		//somente para imprimir do final
		valor_diarias += quant_diarias * 50.00;
		//somente para imprimir do final
		
	} else if(tipo_quarto == 2){
		conta += quant_diarias * 80.00;
		
		//somente para imprimir do final
		valor_diarias += quant_diarias * 80.00;
		//somente para imprimir do final
		
	} else if(tipo_quarto == 3){
		conta += quant_diarias * 150.00;
		
		//somente para imprimir do final
		valor_diarias += quant_diarias * 150.00;
		//somente para imprimir do final
		
	} else {
		cout<<"Número inválido!!!";
		return 0;
	}
	
	if(numerode_massagens > 0 && numerode_massagens <= 3){
		conta += numerode_massagens * 80.00;
		
		//somente para imprimir do final
		total_massagem = numerode_massagens * 80.00;
		//somente para imprimir do final
		
	} else if(numerode_massagens > 3){
		conta += numerode_massagens * 65.00;
		
		//somente para imprimir do final
		total_massagem = numerode_massagens * 65.00;
		//somente para imprimir do final
	}
	
	if(valor_consumido_frigobar > 0){
		conta += valor_consumido_frigobar + manut_frigo;
		
		//somente para imprimir do final
		total_frigobar = valor_consumido_frigobar + manut_frigo;
		//somente para imprimir do final
	}
	
	if(bar_valor > 0){
		conta += bar_valor * garcom_comissao;
		
		//somente para imprimir do final
		total_bar = bar_valor * garcom_comissao;
		//somente para imprimir do final
	}
	
	if(quant_diarias > 0 && quant_diarias <= 5){
		conta *= iss; 
	} else if(quant_diarias > 5 && quant_diarias <= 10){
		conta *= iss_cinco_dias; 
	}else if(quant_diarias > 10){
		conta *= iss_dezoumaisdias; 
	}
	
	
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	cout<<"-------------------------Relatório-------------------------"<<endl;
	cout<<"Número da reserva: "<<reserva_num<<endl;
	cout<<"Nome do responsável pelo reserva: "<<responsavel_reserva<<endl;
	cout<<"Tipo de quarto: "<<tipo_quarto<<endl;
	cout<<"Número de dias: "<<quant_diarias<<endl;
	cout<<"Valor das diárias: "<<valor_diarias<<"R$"<<endl;
	cout<<"Valor do total do serviço de massagem: "<<total_massagem<<"R$"<<endl;
	cout<<"Valor do total do serviço de frigobar: "<<total_frigobar<<"R$"<<endl;
	cout<<"Valor do total do serviço do bar: "<<total_bar<<"R$"<<endl;
	if(quant_diarias > 0 && quant_diarias <= 5){cout<<"ISS: "<<iss<<"% (5%)"<<endl;}
	else if(quant_diarias > 5 && quant_diarias <= 10){cout<<"ISS: "<<iss<<"% (3%)"<<endl;}
	else if(quant_diarias > 10){cout<<"ISS: "<<iss<<"% (1%)"<<endl;}
	cout<<"Conta final: "<<conta<<"R$"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	system("pause");
}

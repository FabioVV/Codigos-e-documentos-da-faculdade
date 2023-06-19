#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matricula;
	int m3_consumidos_mes;
	int classe;
	double conta = 0;
	double conta_c = 0;
	double conta_d = 0;
	double conta_a = 0;
	
	double cofins = 1.03;
	double pis = 1.0065;
	double cofins_c = 0.03;
	double pis_c = 0.0065;
	double residencial = 5.00;
	double comercial = 10.00;
	double industrial = 15.00;
	
	
	cout<<"Digite a matricula do consumidor: ";
	cin>>matricula;
	
	cout<<"Digite o numero de m3 consumidos no mes: ";
	cin>>m3_consumidos_mes;
	
	cout<<"Digite a classe da estrutura... (1 = Residencial, 2 = Comercial, 3 = Industrial): ";
	cin>>classe;
	
	if(classe == 1){
		conta += 5.00;
		conta_a = 5.00;
		
		
	} else if(classe == 2){
		conta += 10.00;
		conta_a = 10.00;
		
		
	} else if(classe == 3){
		conta += 15.00;
		conta_a = 15.00;
	
	}
	
	if(m3_consumidos_mes > 0 && m3_consumidos_mes <= 10){
		conta += 2.99;
		conta = pis * conta * cofins;
		
		conta_a += 2.99;
		conta_d = conta_a * pis_c;
		conta_c = conta_a * cofins_c;

	} else if(m3_consumidos_mes > 11 && m3_consumidos_mes <= 25){
		conta += 5.48 + 2.99;
		conta = pis * conta * cofins;
		
		conta_a += 5.48 + 2.99;
		conta_d = conta_a * pis_c;
		conta_c = conta_a * cofins_c;

	} else if(m3_consumidos_mes > 26 && m3_consumidos_mes <= 50){
		conta += 7.69 + 5.48 + 2.99;
		conta = pis * conta * cofins;
		
		conta_a += 7.69 + 5.48 + 2.99;
		conta_d = conta_a * pis_c;
		conta_c = conta_a * cofins_c;
		
	}else if(m3_consumidos_mes > 50){
		conta += 9.22 + 7.69 + 5.48 + 2.99;
		conta = pis * conta * cofins;
		
		conta_a += 9.22 + 7.69 + 5.48 + 2.99;
		conta_d = conta_a * pis_c;
		conta_c = conta_a * cofins_c;

	}
	
	
	if(classe == 1){cout<<"Tipo de classe: "<<classe<<"  Preço deste tipo: "<<residencial<<"R$"<<endl;}
	else if(classe == 2){cout<<"Tipo de classe: "<<classe<<"  Preço deste tipo: "<<comercial<<"R$"<<endl;}
	else if(classe == 3){cout<<"Tipo de classe: "<<classe<<"  Preço deste tipo: "<<industrial<<"R$"<<endl;}
	cout<<"Valor COFINS: "<<conta_c<<"R$"<<endl;
	cout<<"Valor PIS: "<<conta_d<<"R$"<<endl;
	cout<<"Valor total da conta a pagar: "<<conta<<"R$"<<endl;
	cout<<""<<endl;
	system("pause");
}

#include <iostream>


using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Informa��es
	int pulso_ex = 90;
	string telefone,nome;
	int pulsos;
	double interurbano;
	int tel_tipo;
	double valor_total;
	//Informa��es
	
	//impostos
	double tel_residencial = 17.20;
	double tel_comercial = 25.80;
	double pulso_exc = 0.07;
	double tarifa_basica;
	double interurbano_val = 0.50;
	double imposto_gov = 0.12;
	//impostos
	
	//Valor a pagar
	double servico_exc;
	double interurbano_total;
	double valor_imp;
	//Valor a pagar
	
	cout<<"Digite o nome do consumidor: ";
	cin>>nome;
	
	cout<<"Digite o n�mero de telefone do consumidor: ";
	cin>>telefone;
	
	cout<<"Tipo de telefone (1 = Residencial, 2 = Comercial): ";
	cin>> tel_tipo;
	
	cout<<"N�mero de pulsos registrados: ";
	cin>> pulsos;
	
	cout<<"Total de interurbanos registrados (em minutos): ";
	cin>> interurbano;
	
	
	
	if(tel_tipo == 1){//IF 1 INICIO
		
		tarifa_basica = tel_residencial;
		valor_total = tarifa_basica;
		
		if(pulsos > 90){
			//Servi�o excedente
			servico_exc = valor_total;
			servico_exc = (pulsos - pulso_ex) * pulso_exc;
			//Servi�o excedente
			
			//Valor interurbano
			interurbano_total = interurbano_val * interurbano;
			//Valor interurbano
			
			//Valor imposto governamental
			valor_imp = valor_total + servico_exc + interurbano_total;
			valor_imp = (valor_imp * imposto_gov) + valor_imp;
			//Valor imposto governamental
			
			//Valor total
			valor_total = valor_imp + interurbano_total + servico_exc;
			//Valor total
		} else {
			//Valor interurbano
			interurbano_total = interurbano_val * interurbano;
			//Valor interurbano
			
			//Valor imposto governamental
			valor_imp = valor_total + interurbano_total;
			valor_imp = (valor_imp * imposto_gov) + valor_imp;
			//Valor imposto governamental
			
			//Valor total
			valor_total = valor_imp + interurbano_total;
			//Valor total
		}	
	}//IF 1 FIM
	
	
	else if(tel_tipo == 2){//IF 2INICIO
	
		tarifa_basica = tel_residencial;
		valor_total = tarifa_basica;
		
		if(pulsos > 90){
			//Servi�o excedente
			servico_exc = valor_total;
			servico_exc = (pulsos - pulso_ex) * pulso_exc;
			//Servi�o excedente
			
			//Valor interurbano
			interurbano_total = interurbano_val * interurbano;
			//Valor interurbano
			
			//Valor imposto governamental
			valor_imp = valor_total + servico_exc + interurbano_total;
			valor_imp = (valor_imp * imposto_gov) + valor_imp;
			//Valor imposto governamental
			
			//Valor total
			valor_total = valor_imp + interurbano_total + servico_exc;
			//Valor total
		} else {
			//Valor interurbano
			interurbano_total = interurbano_val * interurbano;
			//Valor interurbano
			
			//Valor imposto governamental
			valor_imp = valor_total + interurbano_total;
			valor_imp = (valor_imp * imposto_gov) + valor_imp;
			//Valor imposto governamental
			
			//Valor total
			valor_total = valor_imp + interurbano_total;
			//Valor total
		}
		
	}//IF 2 fim 
	else{
		cout<<"Tipo inv�lido!"<<endl;
	}
	
	cout<<""<<endl;
	cout<<"----------Relat�rio----------"<<endl;
	cout<<"Nome: "<<nome<<endl;
	cout<<"N�mero de telefone: "<<telefone<<endl;
	if(tel_tipo == 1){cout<<"Valor da Tarifa b�sica: "<<tel_residencial<<"R$"<<endl;}
	else if(tel_tipo == 2){cout<<"Valor da Tarifa b�sica: "<<tel_comercial<<"R$"<<endl;}
	cout<<"Valor do servi�o excedente: "<<servico_exc<<"R$"<<endl;
	cout<<"Valor dos interurbanos: "<<interurbano_total<<"R$"<<endl;
	cout<<"Valor dos impostos: "<<valor_imp<<"R$"<<endl;
	cout<<"Valor total: "<<valor_total<<"R$"<<endl;
	cout<<"----------Fim do Relat�rio----------"<<endl;
	
	system("pause");
}

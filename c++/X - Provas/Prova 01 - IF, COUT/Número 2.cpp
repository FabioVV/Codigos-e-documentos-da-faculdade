#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double conta;
	double conta_mes;
	double conta_dia;
	
	
	double total_kwh;
	int quantidade_pessoas;
	int modo;
	double total_horas;
	
	double verao =  4.00;
	double inverno = 6.00;
	int mes = 30;
	double kwh = 0.50;

	
	cout<<"Quantidade de pessoas morando na residência: ";
	cin>>quantidade_pessoas;
	
	cout<<"Qual o modo que o chuveiro está ligado? (1 = verão, 2 = inverno): ";
	cin>>modo;
	
	if(modo == 1){
	    total_horas = (quantidade_pessoas * 15);
	    total_horas /= 60;
	    conta = total_horas * verao;
	    total_kwh = conta * kwh;
	    conta_dia = total_kwh;
	    conta_mes = total_kwh * mes; 
		
	} else if (modo == 2){
		
		total_horas = (quantidade_pessoas * 15);
	    total_horas /= 60;
	    conta = total_horas * inverno;
	    total_kwh = conta * kwh;
	    conta_dia = total_kwh;
	    conta_mes = total_kwh * mes;
	}
	
	cout<<"Total a ser pago por dia: "<<conta_dia<<"R$"<<endl;
	cout<<"Total a ser pago por mês: "<<conta_mes<<"R$"<<endl;
	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	double saldo;
	int tipo_op;
	double valor_op;
	
	cout<<"Digite o n�mero da conta: ";
	cin>>numero;
	
	cout<<"Digite o saldo da conta: ";
	cin>>saldo;
	
	cout<<"Indique o tipo de opera��o... (1 = Dep�sito, 2 = Retirada): ";
	cin>>tipo_op;
	
	if(tipo_op == 1){
      	cout<<"Digite o valor do dep�sito: ";
    	cin>>valor_op;
    	saldo += valor_op;
    	cout<<"Novo saldo: "<<saldo<<"R$";
    	
	} else if(tipo_op == 2){
	    cout<<"Digite o valor da retirada: ";
	    cin>>valor_op;
	    saldo -= valor_op;
	    if(saldo < 0){
	    	cout<<"Conta Estourada!!!"<<endl;
	    	cout<<"Novo saldo: "<<saldo<<"R$"<<endl;
	    	cout<<""<<endl;
	    	system("pause");
	    	cout<<""<<endl;
	    	return 0;
		}
	    cout<<"Novo saldo: "<<saldo<<"R$";
	}
	
	
	
	
	cout<<""<<endl;
	system("pause");
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	double preco_fin;
	double preco_in;
	string quest;
	
	preco_fin = 0;
	
	cout<<"Digite o valor inicial do carro: ";
	cin>>preco_in;
	preco_fin += preco_in;
	
	if(preco_in <= 0){
		cout<<"Valor inv�lido!!!";
		return 0;
	}
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui vidro el�trico? (s = sim / n = n�o): ";
	cin>>quest;
	
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 500.00;
	} 
		
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui Ar condicionado? (s = sim / n = n�o): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 2000.00;
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui trava central e alarme? (s = sim / n = n�o): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 500.00;
	} 
		
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui pintura met�lica? (s = sim / n = n�o): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 1000.00; 
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui dire��o hidr�ulica? (s = sim / n = n�o): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 2500.00;
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro ser� pago a vista? (s = sim / n = n�o): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin -= (preco_fin * 0.05);
	} 
		
	
	
	cout<<""<<endl;
	cout<<"Pre�o final: "<<preco_fin<<"R$"<<endl;
	cout<<""<<endl;
	system("pause");
}

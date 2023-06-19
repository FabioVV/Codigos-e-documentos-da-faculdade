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
		cout<<"Valor inválido!!!";
		return 0;
	}
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui vidro elétrico? (s = sim / n = não): ";
	cin>>quest;
	
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 500.00;
	} 
		
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui Ar condicionado? (s = sim / n = não): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 2000.00;
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui trava central e alarme? (s = sim / n = não): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 500.00;
	} 
		
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui pintura metálica? (s = sim / n = não): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 1000.00; 
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro possui direção hidráulica? (s = sim / n = não): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin += 2500.00;
	} 
	
	//////////////////////////////////////////////////////
	
	cout<<"O carro será pago a vista? (s = sim / n = não): ";
	cin>>quest;
		
	if(quest == "s" || quest == "S" || quest == "sim" || quest == "Sim"){
		preco_fin -= (preco_fin * 0.05);
	} 
		
	
	
	cout<<""<<endl;
	cout<<"Preço final: "<<preco_fin<<"R$"<<endl;
	cout<<""<<endl;
	system("pause");
}

#include <iostream>

using namespace std;

main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	string questao;
	double preco_final;
	double preco_inicial;
	
	
	preco_final = 0;
	
	cout<<"Digite o valor inicial do carro: ";
	cin>>preco_inicial;
	preco_final += preco_inicial;
	
	if(preco_inicial <= 0){
		cout<<"Valor inv�lido!!!";
		return 0;
	}
	
	cout<<"O carro possui Dire��o el�trica? (s = sim / n = n�o): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final += 1000.00;
	} 
	
	cout<<"O carro possui Teto solar? (s = sim / n = n�o): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final += 3000.00;
	} 
		
	
	cout<<"O carro possui rodas de liga leve? (s = sim / n = n�o): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final += 1500.00; 
	} 
	
	cout<<"Pagar a vista? (s/n): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final -= (preco_final * 0.05);
	} 
		
	
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Pre�o final: "<<preco_final<<"R$"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	system("pause");
	
	}



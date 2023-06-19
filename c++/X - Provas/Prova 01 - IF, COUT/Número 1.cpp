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
		cout<<"Valor inválido!!!";
		return 0;
	}
	
	cout<<"O carro possui Direção elétrica? (s = sim / n = não): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final += 1000.00;
	} 
	
	cout<<"O carro possui Teto solar? (s = sim / n = não): ";
	cin>>questao;
		
	if(questao == "s" || questao == "S"){
		preco_final += 3000.00;
	} 
		
	
	cout<<"O carro possui rodas de liga leve? (s = sim / n = não): ";
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
	cout<<"Preço final: "<<preco_final<<"R$"<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	system("pause");
	
	}



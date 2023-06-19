#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double conta;
	double conta2;
	double conta3;
	
	double desc1;
	double desc2;
	double desc3;
	
	string art1_nome;
	double art1_preco;
	double art1_desc;
	
	string art2_nome;
	double art2_preco;
	double art2_desc;
	
	string art3_nome;
	double art3_preco;
	double art3_desc;
	
	cout<<"Digite o nome do primeiro artigo: ";
	cin >> art1_nome;
	cout<<"Digite o preço do primeiro artigo: ";
	cin >> art1_preco;
	cout<<"Digite o percentual de desconto do primeiro artigo (5% = 0.05  45% = 0.45 70% = 0.70): ";
	cin >> art1_desc;
	
	system("cls");
	
	
	cout<<"Digite o nome do segundo artigo: ";
	cin >> art2_nome;
	cout<<"Digite o preço do segundo artigo: ";
	cin >> art2_preco;
	cout<<"Digite o percentual de desconto do segundo artigo (5% = 0.05  45% = 0.45 70% = 0.70): ";
	cin >> art2_desc;
	
	system("cls");
	
	
	cout<<"Digite o nome do terceiro artigo: ";
	cin >> art3_nome;
	cout<<"Digite o preço do terceiro artigo: ";
	cin >> art3_preco;
	cout<<"Digite o percentual de desconto do terceiro artigo (5% = 0.05  45% = 0.45 70% = 0.70): ";
	cin >> art3_desc;
	
	system("pause");
	system("cls");
	
	
	cout<<"----------------------------------"<<endl;
	conta = art1_preco * art1_desc;
	desc1 = art1_preco - conta;
	cout<<"Nome do primero artigo: "<< art1_nome << endl;
	cout<<"Preço sem desconto do primeiro artigo: "<<"R$"<< art1_preco << endl;
	cout<<"Preço com desconto do primeiro artigo: "<<"R$"<< desc1 << endl;
	cout<<"----------------------------------"<<endl;
	
	
	system("pause");
	system("cls");
	
	cout<<"----------------------------------"<<endl;
	conta2 = art2_preco * art2_desc;
	desc2 = art2_preco - conta2;
	cout<<"Nome do segundo artigo: "<< art2_nome << endl;
	cout<<"Preço sem desconto do segundo artigo: "<<"R$"<< art2_preco << endl;
	cout<<"Preço com desconto do segundo artigo: "<<"R$"<< desc2 << endl;
	cout<<"----------------------------------"<<endl;
	
	
	system("pause");
	system("cls");
	
	cout<<"----------------------------------"<<endl;
	conta3 = art3_preco * art3_desc;
	desc3 = art3_preco - conta3;
	cout<<"Nome do terceiro artigo: "<< art3_nome << endl;
	cout<<"Preço sem desconto do terceiro artigo: "<<"R$"<< art3_preco << endl;
	cout<<"Preço com desconto do terceiro artigo: "<<"R$"<< desc3 << endl;
	cout<<"----------------------------------"<<endl;
	
	
	system("pause");
	system("cls");
	
	cout<<"----------------------------------"<<endl;
	cout<<"Total a pagar: "<<"R$"<<desc1+desc2+desc3<<endl;
	cout<<"----------------------------------"<<endl;
	
	system("pause");
	return 0;
}

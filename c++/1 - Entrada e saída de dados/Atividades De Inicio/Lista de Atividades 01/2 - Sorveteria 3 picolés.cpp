#include <iostream>
#include <stdlib.h>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double pic1,pic2,pic3;
	double q1,q2,q3;
	double total;
	
	pic1 = 0.50;
	pic2 = 0.60;
	pic3 = 0.75;
	
	cout <<"===Tabela==="<<endl;
	cout <<"Picol� 1 custa: R$0,50"<<endl;
	cout <<"Picol� 2 custa: R$0,60"<<endl;
	cout <<"Picol� 3 custa: R$0,75"<<endl;
	cout <<""<<endl;
	
	cout <<"Quantos picol�s '1' deseja comprar?: ";
	cin >>q1;
	cout <<"Quantos picol�s '2' deseja comprar?: ";
	cin >>q2;
	cout <<"Quantos picol�s '3' deseja comprar?: ";
    cin >>q3;
    
    total = (q1 * pic1)+(q2 * pic2)+(q3 * pic3);
    system("cls");
    
    cout <<"Pre�o total: "<<"R$"<<total;
    
    cout <<""<<endl;
    system("pause");
    cout <<""<<endl;
}

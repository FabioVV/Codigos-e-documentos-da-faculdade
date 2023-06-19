#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL,"Portuguese");
	
	double preco1,preco2;
	double vari;
	
	cout<<"Digite o preço em 17/03: ";
	cin >> preco1;
	
	cout<<"Digite o preço em 18/03: ";
	cin >> preco2;
	
	
	vari = (preco1 - preco2) * 100 / preco1;
	vari = vari * -1;
	
	cout <<"Variação: "<<vari<<"%"<<endl;
	
	system("pause");
	return 0;
}

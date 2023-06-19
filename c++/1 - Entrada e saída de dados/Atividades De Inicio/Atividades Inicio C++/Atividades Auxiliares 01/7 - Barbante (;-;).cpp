#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL,"Portuguese");
	
	double largura, altura, comprimento,total;
	
	cout <<"Informe a largura: ";
	cin >> largura;
    cout <<"Informe a altura: ";
    cin >> altura;
    cout <<"Informe a comprimento: " ; 
    cin >> comprimento;
    
    total = (4*altura) + (4*largura)  + (4*comprimento) + 30;
    
    cout <<""<<endl; 
    cout <<"Total: "<<total<<"cm";
    
    
    
    system("pause");
    return 0;
}

#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	

    float nota;
    string nome;
    
    
    for(int i = 0; i < 4; i++){
    	
    	cout<<"Informe o nome: ";
    	cin >> nome;
        cout<<"Infome a nota: ";
        cin >> nota;
        
        if(nota >=7){
        	cout<<"Parab�ns! Aprovado."<<endl;
        	
		} else {
			cout<<"Parab�ns! Reprovado."<<endl;
		}
    	
	}


	
	system("pause");
}

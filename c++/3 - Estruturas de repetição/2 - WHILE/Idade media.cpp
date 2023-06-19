#include <iostream>

using namespace std;


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade,soma;
	float media;
	int i = 0;

	while(i < 3){
		cout<<"Informa a idade: "<<endl;
		cin >> idade;
		soma += idade;
		i++;
	}


    media = soma / 3;
    
    
	
	
	system("pause");
}

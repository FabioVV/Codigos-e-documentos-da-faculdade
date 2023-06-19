#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nome;
	int sexo;
	
	int feminino = 0;
	int masculino = 0;
	int pessoas = 0;
	
	for(int i = 0; i < 10; i++){
		cout<<"Digite o nome número "<<i+1<<"º: ";
		cin >> nome;
		
		cout<<"Digite o sexo do número "<<i+1<<"º (1 - Feminino, 2 - Masculino): ";
		cin >> sexo;
		
		cout<<""<<endl;
		
		if(sexo == 1){
			feminino++;
			pessoas++;
		} else if(sexo == 2){
			masculino++;
			pessoas++;
		}
	}
	
	cout<<"Total de Homens: "<<masculino<<endl;
	cout<<"Total de Mulheres: "<<feminino<<endl;
	cout<<"Total de Pessoas: "<<pessoas<<endl;
	
	system("pause");
}

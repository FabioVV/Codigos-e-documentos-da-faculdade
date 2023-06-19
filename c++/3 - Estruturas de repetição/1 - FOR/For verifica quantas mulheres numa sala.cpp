#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int gen = 0;
	int masc = 0;
	int fem = 0;
	int total = 0;
	
	for(int i = 0; i < 6; i++){
		cout<<"Informe seu gênero "<<i+1<<"º"<<" (Masculino = 1, Feminino = 2): ";
		cin >> gen;
		if(gen == 1){
			masc++;	
			total++;
		} else if (gen == 2){
			fem++;
			total++;
		}
	}
	
	cout<<"Número de mulheres: "<<fem<<endl;
	cout<<"Número de homens: "<<masc<<endl;
	cout<<"Número de pessoas: "<<total<<endl;
	
	system("pause");
}

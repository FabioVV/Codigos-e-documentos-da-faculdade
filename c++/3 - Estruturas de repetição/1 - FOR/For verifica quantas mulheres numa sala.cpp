#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int gen = 0;
	int masc = 0;
	int fem = 0;
	int total = 0;
	
	for(int i = 0; i < 6; i++){
		cout<<"Informe seu g�nero "<<i+1<<"�"<<" (Masculino = 1, Feminino = 2): ";
		cin >> gen;
		if(gen == 1){
			masc++;	
			total++;
		} else if (gen == 2){
			fem++;
			total++;
		}
	}
	
	cout<<"N�mero de mulheres: "<<fem<<endl;
	cout<<"N�mero de homens: "<<masc<<endl;
	cout<<"N�mero de pessoas: "<<total<<endl;
	
	system("pause");
}

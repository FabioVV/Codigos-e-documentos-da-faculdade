#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int voto = 0;
	float cand1 = 0,cand2 = 0,cand3 = 0;
	float votostotais = 0;
	float conta_percent;
	
	cout<<"(1 = Candidato �1, 2 = Candidato �2 e 3 = Candidato �3)"<<endl;
	cout<<"Vote no seu candidato: ";
	cin >> voto;
	
	if(voto > 3 || voto < 0){
	  	cout<<"Voto inv�lido!"<<endl;
	  	voto = 0;
	}
	
	while(voto != 0){
		
	  cout<<""<<endl;
	  cout<<"Vote no seu candidato: ";
	  cin >> voto;
	  
	  
	  if(voto == 1){
	  	cand1++;
	  	votostotais++;
	  } else if(voto == 2){
	  	cand2++;
	  	votostotais++;
	  } else if(voto == 3){
	  	cand3++;
	  	votostotais++;
	  } else if(voto > 3 || voto < 0){
	  	cout<<"Voto inv�lido!"<<endl;
	  	voto = 0;
	  	cout<<""<<endl;
	  }
		
	}
	
	conta_percent = cand1 / votostotais;
	conta_percent *=100;
	cout<<"Porcentagem de votos no candidato n�mero 1: "<<conta_percent<<"%"<<endl;
	
	conta_percent = cand2 / votostotais;
	conta_percent *=100;
	cout<<"Porcentagem de votos no candidato n�mero 2: "<<conta_percent<<"%"<<endl;
	
	conta_percent = cand3 / votostotais;
	conta_percent *=100;
	cout<<"Porcentagem de votos no candidato n�mero 3: "<<conta_percent<<"%"<<endl;
	
	cout<<""<<endl;
	system("pause");
}

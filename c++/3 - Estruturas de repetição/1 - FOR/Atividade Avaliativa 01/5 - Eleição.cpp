#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	//Use essa v�riavel para controlar o FOR
	double total_votantes = 20;
	
	
	
	
	
	
	
	//V�riavel de controle de voto
	int voto;
	
	
	//Total de votos, votos e candidatos
	int totalVotos = 0;
	int totalVotosValidos = 0;
	double cand1 = 0;
	double cand2 = 0;
	double cand3 = 0;
	double nulo = 0;
	double branco = 0;
	double voto_invalido = 0;
	
	//Contas porcentagem
	double conta_percentual = 0;
	
	
	
	cout<<"-------------Digite seu voto-------------"<<endl;
	    cout<<"N�mero 1 - Candidato 01"<<endl;
        cout<<"N�mero 2 - Candidato 02"<<endl;
		cout<<"N�mero 3 - Candidato 03"<<endl;
		cout<<"N�mero 5 - Voto Nulo"<<endl;
		cout<<"N�mero 7 - Voto em Branco"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<""<<endl;
	
	for(int i = 1; i <= total_votantes; i++){
		cout<<"Digite seu voto: ";
		cin >> voto;
		cout<<""<<endl;
		
		if(voto == 1){
			totalVotosValidos++;
			cand1++;
			totalVotos++;
			cout<<"Voc� votou no candidato 01!"<<endl;
			cout<<""<<endl;
		} else if(voto == 2){
			totalVotosValidos++;
			cand2++;
			totalVotos++;
			cout<<"Voc� votou no candidato 02!"<<endl;
			cout<<""<<endl;
		} else if(voto == 3){
			totalVotosValidos++;
			cand3++;
			totalVotos++;
			cout<<"Voc� votou no candidato 03!"<<endl;
		    cout<<""<<endl;
		} else if(voto == 5){
			nulo++;
			totalVotos++;
			cout<<"Voc� votou Nulo!"<<endl;
			cout<<""<<endl;	
		} else if(voto == 7){
			branco++;
			totalVotos++;
			cout<<"Voc� votou em Branco!"<<endl;
			cout<<""<<endl;	
		} else {
			voto_invalido++;
			cout<<"Voto Inv�lido."<<endl;
			cout<<""<<endl;
		}
	}
	
	if(cand1 > cand2 && cand1 > cand3){
		    cout<<""<<endl;
		    cout<<""<<endl;
			cout<<"Candidato 01 vence as elei��es!!!"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
	} else if(cand2 > cand1 && cand2 > cand3){
		    cout<<""<<endl;
		    cout<<""<<endl;
			cout<<"Candidato 02 vence as elei��es!!!"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;	
	} else if(cand3 > cand1 && cand3 > cand2){
		    cout<<""<<endl;
		    cout<<""<<endl;
			cout<<"Candidato 03 vence as elei��es!!!"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;	
	} else {
	      	cout<<""<<endl;
		    cout<<""<<endl;
			cout<<"Sem votos v�lidos!!!"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;	
	}
	
	
	
	cout<<"----------------Dados----------------"<<endl;
	cout<<"Total de votos: "<<totalVotos<<endl;
	cout<<"Total de votos v�lidos: "<<totalVotosValidos<<endl;
	cout<<"Total de votos inv�lidos: "<<voto_invalido<<endl;
	cout<<"Total de votos para o candidato 01: "<<cand1<<endl;
	cout<<"Total de votos para o candidato 02: "<<cand2<<endl;
	cout<<"Total de votos para o candidato 03: "<<cand3<<endl;
	cout<<"Total de votos Nulos: "<<nulo<<endl;
	cout<<"Total de votos Branco: "<<branco<<endl;
	cout<<""<<endl;
	
	conta_percentual = cand1 / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de votos para o canditado 01: "<<conta_percentual<<"%"<<endl;
	
	
	conta_percentual = cand2 / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de votos para o canditado 02: "<<conta_percentual<<"%"<<endl;
	
	
	conta_percentual = cand3 / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de votos para o canditado 03: "<<conta_percentual<<"%"<<endl;
	
	
	conta_percentual = nulo / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de votos Nulos: "<<conta_percentual<<"%"<<endl;
	
	
	conta_percentual = branco / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de votos Brancos: "<<conta_percentual<<"%"<<endl;
	
	
	conta_percentual = voto_invalido / total_votantes;
	conta_percentual *= 100; 
	cout<<"Porcentagem de inv�lidos: "<<conta_percentual<<"%"<<endl;
	cout<<"------------------------------------------"<<endl;

	system("pause");
}

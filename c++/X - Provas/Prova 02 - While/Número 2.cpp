#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
//o cara do while
	int resposta;
//contadores de votos
	float cont_q1 = 0;
	float cont_q2 = 0;
	float cont_q3 = 0;
//contador do total de votos e v�riavel das porcentagens
	float total_votos = 0;
	float conta = 0;
	
	
	cout<<"=======Quest�es======="<<endl;
	
	cout<<"1 - Modalidade Presencial"<<endl;
	cout<<"2 - Modalidade a Dist�ncia "<<endl;
	cout<<"3 - As duas juntas "<<endl;
	cout<<""<<endl;
	cout<<"Digite o n�mero da quest�o para a escolher!"<<endl;
	cout<<"======================"<<endl;
	cout<<""<<endl;
	
	cout<<"Se desejar parar a votagem digite o n�mero zero!  0 "<<endl;
	
	cout <<"Sua resposta: ";
	cin >> resposta;
	
	while(resposta != 0 ){
		
		if(resposta == 1){
			cont_q1++;
			total_votos++;
		} else if(resposta == 2){
			cont_q2++;
			total_votos++;
		} else if(resposta == 3){
			cont_q3++;
			total_votos++;
		} else if (resposta > 3 || resposta < 0){
			cout<<"Escolha inv�lida!"<<endl;
			cout<<""<<endl;
		}
		
		cout <<"Sua resposta: ";
	    cin >> resposta;
	}
	
	
	
	cout<<""<<endl;
	cout<<"=======Resultado dos votos======="<<endl;
    cout<<"Total de votos para 'Modalidade Presencial': "<<cont_q1<<endl;
    cout<<"Total de votos para 'Modalidade a Dist�ncia': "<<cont_q2<<endl;
    cout<<"Total de votos para 'As duas juntas': "<<cont_q3<<endl;
    cout<<""<<endl;
    cout<<"O vencedor foi: "<<endl;
    if(cont_q1 > cont_q2 && cont_q1 > cont_q3){
    	cout<<"Modalidade Presencial."<<endl;
	} else if (cont_q2 > cont_q3){
		cout<<"Modalidade a Dist�ncia."<<endl;
	} else {
		cout<<"As duas juntas."<<endl;
	}
    cout<<""<<endl;
    conta = cont_q1 / total_votos;
    conta *= 100;
    cout<<"Porcentagem de votos para 'Modalidade Presencial': "<<conta<<"%"<<endl;
    conta = cont_q2 / total_votos;
    conta *= 100;
    cout<<"Porcentagem de votos para 'Modalidade a Dist�ncia': "<<conta<<"%"<<endl;
    conta = cont_q3 / total_votos;
    conta *= 100;
    cout<<"Porcentagem de votos para 'As duas juntas': "<<conta<<"%"<<endl;
	cout<<"================================="<<endl;

    cout<<""<<endl;
	system("pause");
}

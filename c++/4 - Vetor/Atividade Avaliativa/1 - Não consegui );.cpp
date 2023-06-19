#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string meses[12];
	int mes = 13;
	int index = 0;
	
	
	meses[0] = "Janeiro";
	meses[1] = "Fevereiro";
	meses[2] = "Março";
	meses[3] = "Abril";
	meses[4] = "Maio";
	meses[5] = "Junho";
	meses[6] = "Julho";
	meses[7] = "Agosto";
	meses[8] = "Setembro";
	meses[9] = "Outubro";
	meses[10] = "Novembro";
	meses[11] = "Dezembro";
	
	cout<<"Meses: "<<endl;
	cout<<""<<endl;
	for(int a = 0; a < 12; a++){
		cout<<meses[a]<<endl;
		
	}
	cout<<""<<endl;
	
	cout<<"Se deseja parar a operação digite '0' !"<<endl;
	
	
	while(mes != 0){
		cout<<"Digite o número do mês desejado: ";
		cin >> mes;
		
		if(mes == 1){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[0];
			cout<<""<<endl;
		} else if (mes == 2){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[1];
			cout<<""<<endl;
		} else if (mes == 3){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[2];
			cout<<""<<endl;
		} else if (mes == 4){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[3];
			cout<<""<<endl;
		} else if (mes == 5){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[4];
			cout<<""<<endl;
		} else if (mes == 6){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[5];
			cout<<""<<endl;
		} else if (mes == 7){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[6];
			cout<<""<<endl;
		} else if (mes == 8){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[7];
			cout<<""<<endl;
		} else if (mes == 9){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[8];
			cout<<""<<endl;
		} else if (mes == 10){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[9];
			cout<<""<<endl;
		} else if (mes == 11){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[10];
			cout<<""<<endl;
		} else if (mes == 12){
			cout<<""<<endl;
			cout<<"Mês de: "<<meses[11];
			cout<<""<<endl;
		}
	}
	
	
	
	system("pause");
}

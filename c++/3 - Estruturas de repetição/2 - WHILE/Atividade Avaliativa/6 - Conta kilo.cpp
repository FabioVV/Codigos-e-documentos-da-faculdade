#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int consumidor_cod;
	float kwh_consumidos_mes = 0;
	int tipo_consumidor;
	float conta = 0;
	
	float total = 0;
	float total_consumo_r = 0;
	float total_consumo_c = 0;
	float total_consumo_i = 0;
	
	float total_r = 0;
	float total_c = 0;
	float total_i = 0;
  
    float residencial = 0.3;
    float comercial = 0.5;
    float industrial = 0.7;
    
    cout<<"(1 = Residencial, 2 = Comercial e 3 = Industrial)"<<endl;
    cout<<"Digite o tipo de consumidor: ";
    cin >> tipo_consumidor;
    
	while(tipo_consumidor != 0){
		
		cout<<"Digite o número de identificação do consumidor: ";
		cin >> consumidor_cod;
		
		cout<<"Digite a quantidade de KWH consumido ao mês do atual consumidor: ";
		cin >> kwh_consumidos_mes;
		
        if(tipo_consumidor == 1){
        	
         	conta = kwh_consumidos_mes * residencial;
         	total_r += conta;
         	total_consumo_r +=kwh_consumidos_mes;
         	
	    } else if(tipo_consumidor == 2){
	    	
	    	conta = kwh_consumidos_mes * comercial;
	    	total_c += conta;
	    	total_consumo_c +=kwh_consumidos_mes;
	    	
		} else if(tipo_consumidor == 3){
			
			conta = kwh_consumidos_mes * industrial;
			total_i += conta;
			total_consumo_i +=kwh_consumidos_mes;
			
		} else if(tipo_consumidor < 0 || tipo_consumidor > 3){
			
			cout<<"Tipo de consumidor inválido!!"<<endl;
			tipo_consumidor = 0;
			cout<<""<<endl;
			
		}
		
		cout<<""<<endl;
		
		cout<<"Digite o tipo de consumidor: ";
        cin >> tipo_consumidor;
	}
	
	if(total_consumo_r >= 0 && total_consumo_i >=0 &&  total_consumo_c >= 0){
		total += total_consumo_r + total_consumo_i + total_consumo_c;
	}
    
	
    cout<<"====================================================="<<endl;
    cout<<"Custo total para o tipo Residencial: "<<"R$ "<<total_r<<" Reais"<<endl;
    cout<<"Custo total para o tipo Comercial: "<<"R$ "<<total_c<<" Reais"<<endl;
    cout<<"Custo total para o tipo Industrial: "<<"R$ "<<total_i<<" Reais"<<endl;
    cout<<"====================================================="<<endl;
    
    
    cout<<"====================================================="<<endl;
    cout<<"O total de consumo: "<<total<<" KWH"<<endl;
    cout<<"====================================================="<<endl;
    
    
    cout<<"====================================================="<<endl;
    if(total_consumo_r > total_consumo_i && total_consumo_r > total_consumo_c){cout<<"O tipo residencial é o maior consumidor: "<<total_consumo_r<<" KWH"<<endl;}
	else if (total_consumo_i > total_consumo_c){cout<<"O tipo industrial é o maior consumidor: "<<total_consumo_i<<" KWH"<<endl;}
	else{cout<<"O tipo comercial é o maior consumidor: "<<total_consumo_c<<" KWH"<<endl;}
    cout<<"====================================================="<<endl;
	
	cout<<""<<endl;
	system("pause");
}

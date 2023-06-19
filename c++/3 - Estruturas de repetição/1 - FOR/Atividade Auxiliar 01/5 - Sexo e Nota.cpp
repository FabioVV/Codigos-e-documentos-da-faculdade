#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
    int sex;
    float nota_m;
    float nota_f;
    int i = 0;
    
    float sum_m;
    float sum_f;

    
    int cont_m;
    int cont_f;
    
    for(i ; i < 5; i++){
    	
    	cout<<"Digite o sexo do aluno(a) "<<"º"<<i+1<<" (1 - Masculino, 2 - Feminino): ";
    	cin >> sex;
    	
    	if(sex == 1){
    		cout<<"Digite a nota do aluno: ";
    		cin >> nota_m;
    		sum_m += nota_m;
    		cont_m++;
    		
		} else if (sex == 2){
			cout<<"Digite a nota da aluna: ";
			cin >> nota_f;
			sum_f += nota_f;
			cont_f++;
		}
    	
	}
     
    sum_m /=i;
    sum_f /=i;
    
    if(sum_m > sum_f){
    	cout<<"Os homens mantém uma média maior que as mulheres. >"<<sum_m<<endl;
    	cout<<"Total de homens: "<<cont_m<<endl;
    	cout<<"Total de mulheres: "<<cont_f<<endl;
	} else if(sum_f > sum_m){
		cout<<"As mulheres mantém uma média maior que os homens. >"<<sum_f<<endl;
		cout<<"Total de homens: "<<cont_m<<endl;
    	cout<<"Total de mulheres: "<<cont_f<<endl;
	} else {
		cout<<"Mesma média."<<"Homens: "<<sum_m<<""<<"Mulheres: "<<sum_f<<endl;
		cout<<"Total de homens: "<<cont_m<<endl;
    	cout<<"Total de mulheres: "<<cont_f<<endl;
		
	}

	
	system("pause");
}

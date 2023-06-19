#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Váriaveis do nome do professor e controle de IFS
	//
	string nome;
	int tipograd;
	double valor_grad;
	
	
	//Váriaveis do salário
	//
	double sal_final;
	double sal_base = 500;
	
	
	//Váriaveis das titulações
	//
	double graduado = 1.05;
	double especialista = 1.11;
	double doutorado = 1.22;
	double mestrado = 1.33;
	
	
	//Váriaveis dos horários
	//
    double total_horas;
    double total_horas_ex;
    double total_horas_val = 0;
    double total_horas_ex_val = 0;
    double total_horas_dif;
    
    
    //Váriaveis das palestras e minicursos
    //
    double minicurso = 200;
    int minicurso_quant;
    double palestra = 150; 
    int palestra_quant;
    double palestra_val = 0;
    double minicurso_val = 0;
    
    
    //Váriaveis dos impostos
    //
    double INSS = 0.11;
    double FGTS = 0.10;
    double imposto_renda = 0.25;
    double fgts_val;
	double inss_val;
	double imposto_renda_val;
	double impostos_totais;
    
    
    cout<<"Digite o nome do professor: ";
    cin>>nome;
    
    cout<<"Digite o tipo de graduação do professor..."<<endl;
    cout<<"(1 - Graduado, 2 - Especialista, 3 - Doutorado, 4 - Mestrado): ";
    cin>>tipograd;
    
    cout<<"Digite o total de horas trabalhadas: ";
    cin>>total_horas;
    
    
    cout<<"Digite quantos minicursos o professor deu: ";
    cin>>minicurso_quant;
    
    cout<<"Digite quantos palestras o professor deu: ";
    cin>>palestra_quant;
    
    
    //Verificando qual o tipo de titulação do professor
	//
    if(tipograd == 1){
    	sal_final = sal_base;
    	valor_grad = sal_final * graduado;
    	sal_final = valor_grad;
    	
	} else if(tipograd == 2){
		sal_final = sal_base;
    	valor_grad = sal_final * especialista;
    	sal_final = valor_grad;
		
	} else if(tipograd == 3){
		sal_final = sal_base;
    	valor_grad = sal_final * doutorado;
    	sal_final = valor_grad;
		
	} else if(tipograd == 4){
		sal_final = sal_base;
    	valor_grad = sal_final * mestrado;
    	sal_final = valor_grad;
		
	}
	
	
	
	//Verificações dos minicursos e palestras
	//
	if(minicurso_quant > 0){
		minicurso_val = minicurso_quant * minicurso;
		sal_final += minicurso_val;
	} 
	
	if(palestra_quant > 0){
		palestra_val = palestra_quant * palestra;
		sal_final += palestra_val;
	} 
	
	
	
	//Verificações das horas trabalhadas
	//
	if(total_horas > 0 && total_horas <= 40){
		
		total_horas_val = total_horas * 25;
		sal_final += total_horas_val;
		
	} else if(total_horas > 40){
		
		total_horas_dif = total_horas - 40;
		total_horas_ex_val = total_horas_dif * 25;
		sal_final += total_horas_ex_val;	
	}
	
	
	
	//Descontos do sálario
	//
	if(sal_final > 0){
		
		fgts_val = sal_final * FGTS;
		inss_val = sal_final * INSS;
		imposto_renda_val = sal_final * imposto_renda;
		impostos_totais = imposto_renda_val+inss_val+fgts_val;
		sal_final -= impostos_totais;
	}
    
    
    
    cout<<""<<endl;
    cout<<"----------------Relatório----------------"<<endl;
    cout<<"Nome do professor: "<<nome<<endl;
    cout<<"Valor da sua titulação: "<<valor_grad<<"R$"<<endl;
    cout<<"Valor de minicursos: "<<minicurso_val<<"R$"<<endl;
    cout<<"Valor de palestras: "<<palestra_val<<"R$"<<endl;
    cout<<"Valor de horas trabalhadas: "<<total_horas_val<<"R$"<<endl;
    cout<<"Valor de horas trabalhadas excedentes: "<<total_horas_ex_val<<"R$"<<endl;
    cout<<"Valor do FGTS: "<<fgts_val<<"R$"<<endl;
    cout<<"Valor do INSS: "<<inss_val<<"R$"<<endl;
    cout<<"Valor do Imposto de Renda: "<<imposto_renda_val<<"R$"<<endl;
    cout<<"Valor dos Impostos totais: "<<impostos_totais<<"R$"<<endl;
    cout<<"Salário final: "<<sal_final<<"R$"<<endl;
    cout<<"-----------------------------------------"<<endl;
	cout<<""<<endl;
	system("pause");
}

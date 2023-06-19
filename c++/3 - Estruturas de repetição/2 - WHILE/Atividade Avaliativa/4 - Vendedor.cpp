#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
    string nome;
    string mais_barato_nome;
    string mais_vendido_nome;
    float preco_u = 0;
    float mais_barato = 99999999;
    float conta = 0;
    int cont = 0;
    
    
    int quant_vend = 0;
    int maisvendido = 0;

    cout<<"Digite o nome do produto: ";
    cin >> nome;
    
    
	while(nome != "fim" && nome != "Fim"){
	  cont++;
		
      cout<<"Digite o preço deste produto: ";
      cin >> preco_u;
      
      conta +=preco_u;
      
      cout<<"Digite a quantidade vendida deste produto: ";
      cin >> quant_vend;
      
      cout<<""<<endl;
      
      if(preco_u < mais_barato){
      	mais_barato = preco_u;
      	mais_barato_nome = nome;
	  }
	  
	  if(quant_vend > maisvendido){
	  	maisvendido = quant_vend;
	  	mais_vendido_nome = nome;
	  }
	  
      
      cout<<"Digite o nome do próximo produto: ";
      cin >> nome;
	  
	}
	
	conta /=cont;
	
	cout<<""<<endl;
	cout<<"=====Nome e valor do produto mais barato====="<<endl;
	cout<<"Nome: "<<mais_barato_nome<<endl;
	cout<<"Valor: "<<" R$ "<<mais_barato<<endl;
	cout<<""<<endl;
	
	cout<<"=====Nome e quantidade do produto mais vendido====="<<endl;
	cout<<"Nome: "<<mais_vendido_nome<<endl;
	cout<<"Quantidade: "<<maisvendido<<endl;
	cout<<""<<endl;
	
	cout<<"=====Média dos preços====="<<endl;
	cout<<"Média: "<<conta<<endl;
	cout<<""<<endl;
	system("pause");
}

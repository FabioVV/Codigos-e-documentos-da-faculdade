#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	string nomes[200];
	int anos_publi[200];
	float valores[200];
	int tipos[200];
	
	int pos = 0;
	
	float media_valores = 0;
	
	float media_valores_livros = 0;
	float media_valores_revistas = 0;
	
	int livro_caro = 0;
	string nome_livro_caro;
	float valor_livro_caro = 0;
	int anos_publi_caro = 0;

	int livro_barato = 1000;
	string nome_livro_barato;
	float valor_livro_barato = 0;
	int anos_publi_barato = 0;
	
	
	
	int anos_publi_recente = 3000;
	int anos_publi_recente_tipo = 0;
	string anos_publi_recente_nome;
	float anos_publi_recente_valor = 0;
	
	cout<<"Para digitar nomes com espaços, substitua-os com '-'!"<<endl;
	cout<<"Exemplo: Algoritmos-para-Experts ao invés de Algoritmos para Experts."<<endl;
	
	cout<<""<<endl;
	cout<<""<<endl;
	
	cout <<"Digite o nome do documento: ";
	cin >> nomes[pos];
	
	while(nomes[pos] != "fim"){
		cout <<"Digite o ano de publicação do documento: ";
		cin >> anos_publi[pos];
		cout <<"Digite o valor do documento: ";
		cin >> valores[pos];
		cout<<"(1 - Revista, 2 - Livro)"<<endl;
		cout <<"Digite o tipo do documento: ";
		cin >> tipos[pos];
		
		pos++;
		cout <<"Digite o nome do documento: ";
		cin >> nomes[pos];
	}
	
	for(int i = 0; i < pos; i++){
		media_valores += valores[i];
	}
	media_valores /= pos;
	
	for(int b = 0; b < pos; b++){
		if(tipos[b] == 1){
			media_valores_revistas += valores[b];
		}
	}
	media_valores_revistas /= pos;
	
	for(int c = 0; c < pos; c++){
		if(tipos[c] == 2){
			media_valores_livros += valores[c];
		}
	}
	media_valores_livros /= pos;
	
	for(int k = 0; k < pos; k++){
		if(valores[k] > livro_caro){
			livro_caro = valores[k];
			nome_livro_caro = nomes[k];
			anos_publi_caro = anos_publi[k];
		}
	}
	
	for(int q = 0; q < pos; q++){
		if(valores[q] < livro_barato){
			livro_barato = valores[q];
			nome_livro_barato = nomes[q];
			anos_publi_barato = anos_publi[q];
		}
	}
	
	for(int h = 0; h < pos; h++){
		if(anos_publi[h] < anos_publi_recente){
			anos_publi_recente = anos_publi[h];
			anos_publi_recente_tipo = tipos[h];
			anos_publi_recente_nome = nomes[h];
			anos_publi_recente_valor = valores[h];
		}
	}
	
	
	cout<<"Média de preço do acervo: "<<media_valores<<endl;
	for(int a = 0; a < pos; a++){
		if(nomes[a] == "Algoritmos-para-Experts"){
			cout<<""<<endl;
			cout<<"Algoritmos para Experts está disponivel!"<<endl;
			cout<<""<<endl;
		}
	}
	if(	media_valores_livros > 	media_valores_revistas){cout<<"Livros tem a média de preço maior."<<endl;}
	else if(media_valores_revistas > media_valores_livros){cout<<"Revistas tem a média de preço maior."<<endl;}
	
	
	
	cout<<""<<endl;
	cout<<"Item mais barato: "<<endl;
	cout<<"Nome: "<<nome_livro_barato<<endl;
	cout<<"Preço: "<<livro_barato<<endl;
	cout<<"Ano: "<<anos_publi_barato<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Item mais caro: "<<endl;
	cout<<"Nome: "<<nome_livro_caro<<endl;
	cout<<"Preço: "<<livro_caro<<endl;
	cout<<"Ano: "<<anos_publi_caro<<endl;
	cout<<""<<endl;
	
	cout<<""<<endl;
	cout<<"Item mais recente: "<<endl;
	cout<<"Nome: "<<anos_publi_recente_nome<<endl;
	cout<<"Preço: "<<anos_publi_recente_valor<<endl;
	cout<<"1-Revista 2-Livro: "<<anos_publi_recente_tipo<<endl;
	cout<<""<<endl;
	
	
	
	
	system("pause");
}

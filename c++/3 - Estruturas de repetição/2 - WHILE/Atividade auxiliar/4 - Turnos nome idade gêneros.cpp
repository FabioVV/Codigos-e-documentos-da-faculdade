// 5. nome, sexo, idade, turno (1 e 2) e semestre
// para encerrar 0 para o turno
// a) O número de alunos matriculados em cada turno
// b) A faixa etária dos alunos calouros (1º e 2º semestre)
// c) O número de mulheres que estudam pela manhã
// d) Qual sexo possui mais alunos no curso

#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	string nome;
	int idade, sexo, turno, semestre;
	int cont_manha=0, cont_noite=0, cont_calouro=0, soma_idade_calouro=0;
	float faixa_etaria_calouro;
	int cont_mulher_manha=0, cont_m=0, cont_h=0;
	
	cout << "Informe o turno (1-manhã / 2-noite / 0-Encerrar): ";
	cin >> turno;
	while (turno != 0)  // flag de parada
	{
		cout << "Informe o nome: ";
		cin >> nome;
		cout << "Informe a idade: ";
		cin >> idade;
		cout << "Informe o sexo (1-Fem / 2-Masc): ";
		cin >> sexo;
		cout << "Informe o semestre: ";
		cin >> semestre;
		
		// processo
		// letra a
		if (turno==1)
		{
			cont_manha++;
		}
		if (turno==2)
		{
			cont_noite++;
		}
		
		// letra b
		if (semestre == 1 || semestre == 2)
		{
			cont_calouro++;
			soma_idade_calouro = soma_idade_calouro + idade;
		}
		
		// letra c
		if (sexo==1 && turno==1)
		{
			cont_mulher_manha++;
		}
		
		// letra d
		if (sexo == 1)
		{
			cont_m++;
		}
		if (sexo == 2)
		{
			cont_h++;
		}
		
		cout << "\nInforme o turno (1-manhã / 2-noite / 0-Encerrar): ";
		cin >> turno;
	} // fim enquanto
	// segue o baile
	
	// saídas
	// letra A
	cout << "\n\n==== Letra A";
	cout << "\nTotal de alunos da manhã: " << cont_manha;
	cout << "\nTotal de alunos da noite: " << cont_noite;
	
	// letra B
	faixa_etaria_calouro = soma_idade_calouro / cont_calouro;
	cout << "\n\n==== Letra B";
	cout << "\nFaixa etária dos calouros: " << faixa_etaria_calouro;
	
	// letra C
	cout << "\n\n==== Letra C";
	cout << "\nTotal de mulheres da manhã: " << cont_mulher_manha;
	
	// letra D
	cout << "\n\n==== Letra D";
	if (cont_m > cont_h)
	{
		cout << "\nMulheres mais: " << cont_m;
	}
	else if (cont_h > cont_m)
	{
		cout << "\nHomens mais: " << cont_h;
	}
	else
	{
		cout << "\nMesmo tanto: " << cont_m;
	}
	
	
}

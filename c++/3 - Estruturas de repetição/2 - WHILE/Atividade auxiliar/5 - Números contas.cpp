// 6. Fa�a um algoritmo para ler um conjunto indeterminado de fichas
// contendo, o valor da nota fiscal. 
// Para encerrar digite 0 (zero) no valor da NF
// a) O n�mero de NFs abaixo de R$ 1.000,00
// b) O n�mero de NFs entre R$ 1.000,00 e R$ 5.000,00
// c) O n�mero de NFs acima de R$ 5.000,00
// d) O n�mero total de Notas Fiscais
// e) O valor total de vendas no m�s

#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	float valor_nf, soma_valor_nf=0;
	int cont_menor_1000 = 0, cont_1000_5000=0, cont_acima_5000=0;
	int cont_nf=0;
	
	cout << "Informe o valor da primeira NF: ";
	cin >> valor_nf;
	while (valor_nf != 0)
	{
		// processo
		// letra a
		if (valor_nf < 1000)
		{
			cont_menor_1000++;
		}
		// letra b
		if (valor_nf >= 1000 && valor_nf <= 5000)
		{
			cont_1000_5000++;
		}
		// letra c
		if (valor_nf > 5000)
		{
			cont_acima_5000++;
		}
		// letra d
		cont_nf++;
		
		// letra e
		soma_valor_nf = soma_valor_nf + valor_nf;
		
		cout << "Informe o valor da pr�xima NF: ";
		cin >> valor_nf;
	}
	// segue o fandango
	
	// cont_nf=cont_1000_5000+cont_acima_5000+cont_menor_1000;
	
	// letra A
	cout << "\n\n==== Letra A";
	cout << "\nTotal de NFs menores de R$ 1.000,00: " << cont_menor_1000;
	// letra B
	cout << "\n\n==== Letra B";
	cout << "\nTotal de NFs entre R$ 1.000,00 e R$ 5.000,00: " << cont_1000_5000;
	// letra C
	cout << "\n\n==== Letra C";
	cout << "\nTotal de NFs acima de R$ 5.000,00: " << cont_acima_5000;
	// letra D
	cout << "\n\n==== Letra D";
	cout << "\nTotal de NFs: " << cont_nf;
	// letra E
	cout << "\n\n==== Letra E";
	cout << "\nValor total de vendas: R$ " << soma_valor_nf;

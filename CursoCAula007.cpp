/* ***************************************************************************
AULA 007 - https://youtu.be/we_Bh7yL3kg?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #007 - Incremento e Decremento de Variáveis, Operadores pós e pré-fixados
Nesta aula iremos falar sobre como incrementar e ou decrementar valores de variáveis e como usar operadores pós e pré-fixados.
*/
// Biblioteca dos comandos básicos de entrada e saída.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main(){
	
	// declarar variável
	int n1;
	
	// incrementar o valor de uma variavel
	// incremento e decremento
	// posso definir qualquer valor para incrementar ou decrementar...
	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1 = n1 + 1; // forma simples de incrementar n1 = n1 + 1
	cout << "n1 = n1 + 1 = " << n1 << "\n\n\n";
	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1 += 1;     // forma mais simples de incrementar n1 += 1
	cout << "n1 += 1 = " << n1 << "\n\n\n";
	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1++;        // Forma simplificada e mais comum de usar o incremento n1++
	cout << "n1++ = " << n1 << "\n\n\n";

	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1 = n1 - 1; // forma simples de incrementar n1 = n1 - 1
	cout << "n1 = n1 - 1 = " << n1 << "\n\n\n";
	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1 -= 1;     // forma mais simples de incrementar n1 -= 1
	cout << "n1 -= 1 = " << n1 << "\n\n\n";
	n1 = 0;
	cout << "n1 = " << n1 << "\n";
	n1--;        // Forma simplificada e mais comum de usar o incremento n1--
	cout << "n1-- = " << n1 << "\n\n\n";
	
	// usando outros operadoresd
	n1 = 0;
	n1 += 10;
	cout << "n1 += 10 " << n1 << "\n";
	n1 -= 3;
	cout << "n1 -= 3 " << n1 << "\n";
	n1 *= 10;
	cout << "n1 *= 10 " << n1 << "\n";
	n1 /= 10;
	cout << "n1 /= 10 " << n1 << "\n\n\n";
	
	// Pós incremento e pós decremento - somente com adição ou subtração - n1++ ou n1-- - isto é o pós incremento/decremento
	// Formas de incrementar ou decrementar
	// n1 = n1 + 10   equivale   n1 += 10   equivale   n1++
	// n1 = n1 - 10   equivale   n1 -= 10   equivale   n1--
	// n1 = n1 * 10   equivale   n1 *= 10
	// n1 = n1 / 10   equivale   n1 /= 10
	
	// Pré incremento e pré decremento - somente com adição ou subtração - ++n1 ou --n1 - isto é o pré incremento/decremento
	// ++n1
	// incremento
	n1 = 0;
	cout << "POS Incremento - n1 = 0" << "\n"; // ele não muda o valor no primeiro calculo pois e POS
	cout << "n1++ = " << n1++ << "\n";     // 0 
	cout << "n1++ = " << n1++ << "\n";     // 1
	cout << "n1++ = " << n1++ << "\n";     // 2
	cout << "n1++ = " << n1++ << "\n";     // 3
	cout << "n1++ = " << n1++ << "\n";     // 4
	cout << "n1++ = " << n1++ << "\n\n\n"; // 5
	//
	n1 = 0;
	cout << "PRE Incremento - n1 = 0" << "\n"; // ele muda o valor no primeiro calculo pois e PRE
	cout << "++n1 = " << ++n1 << "\n";     // 1
	cout << "++n1 = " << ++n1 << "\n";     // 2
	cout << "++n1 = " << ++n1 << "\n";     // 3
	cout << "++n1 = " << ++n1 << "\n";     // 4
	cout << "++n1 = " << ++n1 << "\n";     // 5
	cout << "++n1 = " << ++n1 << "\n\n\n"; // 6
	
	// --n1
	// decremento
	n1 = 0;
	cout << "POS Decremento - n1 = 0" << "\n"; // ele não muda o valor no primeiro calculo pois e POS
	cout << "n1-- = " << n1-- << "\n";     // 0 
	cout << "n1-- = " << n1-- << "\n";     // -1
	cout << "n1-- = " << n1-- << "\n";     // -2
	cout << "n1-- = " << n1-- << "\n";     // -3
	cout << "n1-- = " << n1-- << "\n";     // -4
	cout << "n1-- = " << n1-- << "\n\n\n"; // -5
	//
	n1 = 0;
	cout << "PRE Decremento - n1 = 0" << "\n"; // ele muda o valor no primeiro calculo pois e PRE
	cout << "--n1 = " << --n1 << "\n";     // -1
	cout << "--n1 = " << --n1 << "\n";     // -2
	cout << "--n1 = " << --n1 << "\n";     // -3
	cout << "--n1 = " << --n1 << "\n";     // -4
	cout << "--n1 = " << --n1 << "\n";     // -5
	cout << "--n1 = " << --n1 << "\n\n\n"; // -6

	return 0; // padrão não retorna nada...
}


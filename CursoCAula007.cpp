/* ***************************************************************************
AULA 007 - https://youtu.be/we_Bh7yL3kg?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #007 - Incremento e Decremento de Vari�veis, Operadores p�s e pr�-fixados
Nesta aula iremos falar sobre como incrementar e ou decrementar valores de vari�veis e como usar operadores p�s e pr�-fixados.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main(){
	
	// declarar vari�vel
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
	
	// P�s incremento e p�s decremento - somente com adi��o ou subtra��o - n1++ ou n1-- - isto � o p�s incremento/decremento
	// Formas de incrementar ou decrementar
	// n1 = n1 + 10   equivale   n1 += 10   equivale   n1++
	// n1 = n1 - 10   equivale   n1 -= 10   equivale   n1--
	// n1 = n1 * 10   equivale   n1 *= 10
	// n1 = n1 / 10   equivale   n1 /= 10
	
	// Pr� incremento e pr� decremento - somente com adi��o ou subtra��o - ++n1 ou --n1 - isto � o pr� incremento/decremento
	// ++n1
	// incremento
	n1 = 0;
	cout << "POS Incremento - n1 = 0" << "\n"; // ele n�o muda o valor no primeiro calculo pois e POS
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
	cout << "POS Decremento - n1 = 0" << "\n"; // ele n�o muda o valor no primeiro calculo pois e POS
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

	return 0; // padr�o n�o retorna nada...
}


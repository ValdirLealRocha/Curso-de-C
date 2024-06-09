/* ***************************************************************************
AULA 022 - https://youtu.be/uB3Gm0QrgRw?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #022 - Fun��es - Parte 1
Nesta aula iremos aprender a criar e usar fun��es em C++.
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// prototipar as fun��es... Apresentando... 
// DECLARA��O DAS FUN��ES...
void texto();
void soma(int n1, int n2);
int  soma2(int n1, int n2);
void tr(string tra[4]);

// MAIN() - Padr�o ANSI - fun��o principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// � um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar vari�vel

	// chama afun��o
	texto(); // chama quantas vezes precisar, reutiliza��o de c�digo...
	
	cout << "\ninicio do for\n";
	for(int i = 0; i < 10; i++) {
		texto(); //chama a fun��o 10 vezes...
	}
	cout << "\nfim do for\n";

	// chama soma()
	cout << "\ninicio da soma\n";
	soma(15, 5);
	cout << "\nfim da soma\n";

	// chama soma2()
	cout << "\ninicio da soma2\n";
	int res;
	res = soma2(10, 20);
	cout << "Resultado de res: " << res;
	cout << "\nResultado da fun��o: " << soma2(10, 20);
	cout << "\nfim da soma2\n";

	// chama soma2()
	cout << "\ninicio da transp\n";
	string transp[4] = {"Carro", "Moto", "Barco", "Avi�o"};
	tr(transp); // repassa uma array...
	cout << "\nfim da transp\n";

	return 0; // padr�o n�o retorna nada...
}

// para organiza��o do projeto, define as fun��es daqui para baixo, boas pr�ticas...

// soma dois valores
// void - tipo de retorno, n�o retorna nada...
// texto() - nome da fun��o - que pode ou n�o ter parametros/argumentos...
void texto() {
	// escrever o objetivo da fun��o no corpo da fun��o...
	cout << "Canal Fessor Bruno\n";
}

// recebe dois numeros e mostra a somat�ria na tela...
void soma(int n1, int n2) {
	cout << "\nSoma: " << (n1 + n2) << "\n";
}

// recebe dois n�meros e retorna o resultado da soma...
int  soma2(int n1, int n2) {
	return (n1 + n2);
}

// recebe um array e imprime os indices na tela...
void tr(string tra[4]) {
	for(int i = 0; i< 4; i++) {
		cout << tra[i] << "\n";
	}
}
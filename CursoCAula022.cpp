/* ***************************************************************************
AULA 022 - https://youtu.be/uB3Gm0QrgRw?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #022 - Funções - Parte 1
Nesta aula iremos aprender a criar e usar funções em C++.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// prototipar as funções... Apresentando... 
// DECLARAÇÃO DAS FUNÇÕES...
void texto();
void soma(int n1, int n2);
int  soma2(int n1, int n2);
void tr(string tra[4]);

// MAIN() - Padrão ANSI - função principal
// int argc - quantidade de paramentros passados...
// char *argv[] - armazena os argumentos, 
// é um ponteiro para uma matriz de ponteiros para uma matriz de caracteres...
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil"); 

	// declarar variável

	// chama afunção
	texto(); // chama quantas vezes precisar, reutilização de código...
	
	cout << "\ninicio do for\n";
	for(int i = 0; i < 10; i++) {
		texto(); //chama a função 10 vezes...
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
	cout << "\nResultado da função: " << soma2(10, 20);
	cout << "\nfim da soma2\n";

	// chama soma2()
	cout << "\ninicio da transp\n";
	string transp[4] = {"Carro", "Moto", "Barco", "Avião"};
	tr(transp); // repassa uma array...
	cout << "\nfim da transp\n";

	return 0; // padrão não retorna nada...
}

// para organização do projeto, define as funções daqui para baixo, boas práticas...

// soma dois valores
// void - tipo de retorno, não retorna nada...
// texto() - nome da função - que pode ou não ter parametros/argumentos...
void texto() {
	// escrever o objetivo da função no corpo da função...
	cout << "Canal Fessor Bruno\n";
}

// recebe dois numeros e mostra a somatória na tela...
void soma(int n1, int n2) {
	cout << "\nSoma: " << (n1 + n2) << "\n";
}

// recebe dois números e retorna o resultado da soma...
int  soma2(int n1, int n2) {
	return (n1 + n2);
}

// recebe um array e imprime os indices na tela...
void tr(string tra[4]) {
	for(int i = 0; i< 4; i++) {
		cout << tra[i] << "\n";
	}
}
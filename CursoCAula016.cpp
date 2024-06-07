/* ***************************************************************************
AULA 016 - https://youtu.be/lzmelLr44WI?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #016 - Comando de loop Do While
Nesta aula iremos aprender nosso segundo loop, o comando do while, 
uma simples variação do loop while que garante a execução do bloco de 
comandos pelo menos uma vez, mesmo que a condição para o loop já tenha 
iniciada satisfeita.
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;

#include <locale.h> // definir localização para acentuar coeertamente...

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	// declarar variável
	int cont;

	// inicialização
	cont = 20;

	// while avalia no inicio do looping
	// do while avalia no fim da primeira execução do looping
	// este laço irá executar o bloco de comando um vez independente da comparação/operação...
	do {
		cout << "\nCanal Fessro Bruno - " << cont++ << "\n";
	} while (cont < 20);
	
	// mensagem
	cout << "\nFim do Programa!";

	return 0; // padrão não retorna nada...
}
/* ***************************************************************************
AULA 020 - https://youtu.be/dkbwb_8dBU0?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Jogo da forma em c++
*/
// Biblioteca dos comandos básicos de entrada e saí­da.
#include <iostream> // não usa o ;
#include <stdlib.h>

#include <locale.h> // definir localização para acentuar coeertamente...

// Definição do NameSpace - onde estão as funções que serão utilizadas
using namespace std;

// Padrão ANSI - função principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	//
	// *************
	// JOGO DA FORCA
	// *************
	//

	// declarar variável
	char palavra[30], // contém a palavra secreta
	     letra[1],    // registra as alternativas que a pessoa for digitando
			 secreta[30]; // contém a palavra que será disvendada

	int tam,     // Tamanho da quantidade de caracteres da palavra secreta
	    i,       // Indice do laço
			chances, // número de chances pra jogar 
			acertos; // Conseguiu acertar a palavra secreta

	bool acerto; // verifica se a pessoa digitou a letra correta

	// inicialização
	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;

	// captura a palavra secreta via teclado
	cout << "Fale para seu amigo tampar os olhos e Digite a palavra secreta: ";
	cin >> palavra;

	system("cls");

	while(palavra[i] != '\0') { // '\0' - ao teclar a palavra é adicionado o \0 fim do texto...
		i++; // incrementa o indice
		tam++; // incrementa o tamanho da string
	}

	// preencher o vertor secretas com tracinhos...
	for(i = 0; i < 30; i++) {
		secreta[i] = '-';
	}

	// informações do jogo
	// o jogo é um looping
	while((chances > 0) && (acertos < tam)) { 
		cout << "Chances restantes: " << chances << "\n\n";
		cout << "Palavra secreta: ";
		// Revela a palavra secreta...
		for(i = 0; i < tam; i++) {
				cout << secreta[i];
		}
		// capturar uma letra pra comparar se tem na palavra secreta...
		cout << "\n\nDigite uma Letra: ";
		cin >> letra[0];
		// pesquisa a letra digitada...
		for(i = 0; i < tam; i++) {
			// compara a letra digitada se está contida na palavra secreta...
			if(palavra[i] == letra[0]) {
				acerto = true; // indica que houve acerto
				secreta[i] = palavra[i]; // ajustas a letra correta na posição coreta
				acertos++; // incrementa acertos
			}
		}
		// caso não haja acertos...
		if(!acerto) {
			chances--; // decrementa as chances de acertos...
		}
		acerto =false; // seta que não acertou e recomeça...
		system("cls"); // limpa a tela
	}
	// acertou ou não e sem chances...
	if(acertos == tam) {
		cout << "\n\nVocê Venceu!!!\n\n";
	}else {
		cout << "\n\nLamento! Você Perdeu!!!\n\n";
	}

	system("pause");

	return 0; // padrão não retorna nada...
}
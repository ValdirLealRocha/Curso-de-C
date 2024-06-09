/* ***************************************************************************
AULA 020 - https://youtu.be/dkbwb_8dBU0?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Jogo da forma em c++
*/
// Biblioteca dos comandos b�sicos de entrada e sa�da.
#include <iostream> // n�o usa o ;
#include <stdlib.h>

#include <locale.h> // definir localiza��o para acentuar coeertamente...

// Defini��o do NameSpace - onde est�o as fun��es que ser�o utilizadas
using namespace std;

// Padr�o ANSI - fun��o principal
int main() {

	setlocale(LC_ALL, "Portuguese_Brazil"); 
	
	//
	// *************
	// JOGO DA FORCA
	// *************
	//

	// declarar vari�vel
	char palavra[30], // cont�m a palavra secreta
	     letra[1],    // registra as alternativas que a pessoa for digitando
			 secreta[30]; // cont�m a palavra que ser� disvendada

	int tam,     // Tamanho da quantidade de caracteres da palavra secreta
	    i,       // Indice do la�o
			chances, // n�mero de chances pra jogar 
			acertos; // Conseguiu acertar a palavra secreta

	bool acerto; // verifica se a pessoa digitou a letra correta

	// inicializa��o
	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;

	// captura a palavra secreta via teclado
	cout << "Fale para seu amigo tampar os olhos e Digite a palavra secreta: ";
	cin >> palavra;

	system("cls");

	while(palavra[i] != '\0') { // '\0' - ao teclar a palavra � adicionado o \0 fim do texto...
		i++; // incrementa o indice
		tam++; // incrementa o tamanho da string
	}

	// preencher o vertor secretas com tracinhos...
	for(i = 0; i < 30; i++) {
		secreta[i] = '-';
	}

	// informa��es do jogo
	// o jogo � um looping
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
			// compara a letra digitada se est� contida na palavra secreta...
			if(palavra[i] == letra[0]) {
				acerto = true; // indica que houve acerto
				secreta[i] = palavra[i]; // ajustas a letra correta na posi��o coreta
				acertos++; // incrementa acertos
			}
		}
		// caso n�o haja acertos...
		if(!acerto) {
			chances--; // decrementa as chances de acertos...
		}
		acerto =false; // seta que n�o acertou e recome�a...
		system("cls"); // limpa a tela
	}
	// acertou ou n�o e sem chances...
	if(acertos == tam) {
		cout << "\n\nVoc� Venceu!!!\n\n";
	}else {
		cout << "\n\nLamento! Voc� Perdeu!!!\n\n";
	}

	system("pause");

	return 0; // padr�o n�o retorna nada...
}
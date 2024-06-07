/* ***************************************************************************
AULA 013 - https://youtu.be/PB6MrnJ3m34?list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40
Curso de C++ #013 - Comando Switch Case
Nesta aula iremos aprender como utilizar o comando switch para comparações e 
seleção múltipla que testa o valor de uma expressão contra uma lista de constantes.
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
	int val;

	// mostra mensagem...
	cout << "\n\nSelecione uma cor:\n";
	cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";
	cin >> val; // captura teclado

	// validação com switch
	switch (val) {
		case 1:
			cout << "Cor selecionada: Verde\n\n";
			break;

		case 2:
			cout << "Cor selecionada: Azul\n\n";
			break;
		
		case 3:
			cout << "Cor selecionada: Verde\n\n";
			break;

		default:
			cout << "Cor inválida!\n\n";
		break;
	}

	// mostra mensagem...
	cout << "\n\nSelecione uma cor:\n";
	cout << "[1, 2, 3] = Verde, [4, 5, 6] = Azul\n";
	cin >> val; // captura teclado

	// validação com switch
	switch (val) {
		case 1:
		case 2:
		case 3:
			cout << "Cor selecionada: Verde\n\n";
			break;

		case 4:
		case 5:
		case 6:
			cout << "Cor selecionada: Azul\n\n";
			break;

		default:
			cout << "Cor inválida!\n\n";
		break;
	}

	// mostra mensagem...
	cout << "\n\nSelecione uma Transporte:\n";
	cout << "[1]=Carro, [2]=Moto [3]=Avião, [4]=Helicóptero\n";
	cin >> val; // captura teclado

	// validação com switch
	switch (val) {
		case 1:
		case 2:
			cout << "Transporte Terrestre\n\n";
			switch (val) {
				case 1:
					cout << "Carro selecionado\n\n";
					break;
				case 2:
					cout << "Moto selecionada\n\n";
					break;
			}
			break;

		case 3:
		case 4:
			cout << "Transporte Aéreo\n\n";
			switch (val) {
				case 3:
					cout << "Avião selecionado\n\n";
					break;
				case 4:
					cout << "Helicóptero selecionado\n\n";
					break;
			}
			break;

		default:
			cout << "Cor inválida!\n\n";
		break;
	}

	cout << "Programa Finalizado!!\n\n";

	return 0; // padrão não retorna nada...
}
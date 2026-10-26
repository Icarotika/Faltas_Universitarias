#include <iostream>
#include <windows.h>
using namespace std;



// Variaveis
float aulasN;
int resposta;
int frequenciaminima = 75;
float faltastotais;
float multiplicacaofinalfodasticosinistroemuitopika;
float subtracaofinalfodasticosinistroemuitopika;

// Definindo Funções
void aulas(void);
void frequencia(void);
void faltas(void);
void calculofinal(void);


// Main
main () {
	cout << "\n";
	cout << "----------- BEM VINDO A CALCULADORA DE FALTAS -----------";
	cout << "\n";
	cout << "\n";
	cout << "\n";

	system("pause");
	system("cls");
	aulas();
	frequencia();
	faltas();
}


// Escrevendo Funções

void aulas (void) {
	resposta = 0;
	cout << "\n";
	cout << " ---------------- PRIMEIRO PASSO = AULAS ----------------";
	cout << "\n";
	cout << "\n";
	cout << " Voce sabe quantas aulas esta materia possuira? (total do semestre)";
	cout << "\n 1 - Sim";
	cout << "\n 2 - Nao";
	cout << "\n ---> ";
	cin >> resposta;
	if (resposta == 1) {
		cout << " Quantas aulas tera esta materia?";
		cout << "\n ---> ";
		cin >> aulasN;
	} else {
		cout << "\n";
		cout << " Então usaremos como base 80 Aulas.";
		aulasN = 80;
	}
	Sleep(1000);
	system("cls");
}

void frequencia (void) {
	resposta = 0;
	cout << "\n";
	cout << " -------------- SEGUNDO PASSO = FREQUENCIA --------------";
	cout << "\n";
	cout << "\n";
	cout << " Voce sabe se a sua faculdade possui frequencia minima diferente de 75%?";
	cout << "\n 1 - Sim";
	cout << "\n 2 - Nao";
	cout << "\n ---> ";
	cin >> resposta;
	if (resposta == 1) {
		cout << "\n";
		cout << " Diga a frequencia minima exigida pela sua faculdade.";
		cout << "\n ---> ";
		cin >> frequenciaminima;
		cout << "\n";
	} else {
	cout << "\n";
	cout << " Usaremos como base então que a frequencia minima eh de 75%. (MEC)";
	cout << "\n";
	}
	Sleep(1000);
	system("cls");
}

void faltas(void) {
	cout << "\n";
	cout << "----------------- PASSO FINAL = CALCULO -----------------";
	cout << "\n";
	cout << "\n";
	cout << " Quantas faltas voce ja possui? (Em aulas, Nao em dias)";
	cout << "\n ---> ";
	cin >> faltastotais;
	multiplicacaofinalfodasticosinistroemuitopika = faltastotais / aulasN * 100;
	
	for (int i = 0; i > 3; i++) {
		Sleep(200);
		cout << " Calculando.";
		Sleep(200);
		cout << " Calculando..";
		Sleep(200);
		cout << " Calculando...";
	}
	
}

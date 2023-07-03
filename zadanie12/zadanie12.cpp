#include <iostream>
#include<locale.h>
#include<stdlib.h>
using namespace std;
void autor(void) {
	printf("\n");
	for (int i = 1; i <= 120; i++) cout << "*";
	cout << "Autor programu: Simon Dudek\n\n";
	for (int i = 1; i <= 120; i++) cout << "*";
}
void macierz(int wiersze, int kolumny, int **tab) {
	tab = (int**) malloc(sizeof(int)*wiersze);
	for (int i=0; i<wiersze; i++) {
		tab[i] = (int*)calloc(kolumny, sizeof(int));
	}
}
void wyswietl(int wiersze, int kolumny, int **tab) {
	for (int i = 0, j = 0; i < kolumny && j < wiersze; i++) {
		
		if (i == kolumny - 1) {
			cout << endl;
			i = -1;
			j++;
		}
		
	}
}
int main() {
	int w, k;
	int **dynamo=NULL;
	setlocale(LC_ALL, "");
	autor();
	cout << "Podaj wymiary macierzy.\nWiersze: ";
	cin >> w;
	cout << "Kolumny: ";
	cin >> k;
	macierz(w, k, dynamo);
	wyswietl(w, k, dynamo);
	free(dynamo);
	system("pause");
	return 0;
}
//P1: Z ilu tablic jednowymiarowych zbudowana jest dynamiczna tablica [3][5] ?
//18
//P2: Na czym polega wyciek pamięci ? Proszę podad przykład w odniesieniu do swojego kodu… co należałoby zmienid aby ten błąd wystąpił ?
//Wyciek pamięci to błąd programisty podczas dynamicznego alokowania pamięci polegający na niezwolnieniu pamięci funkcją free. 
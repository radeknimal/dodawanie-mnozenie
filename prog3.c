#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a * b);
	return a * b; }

int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a + b);
	return a + b; }

int odej(int a, int b){
	printf("Wynik odejmowania: %i\n", a - b);
	return a - b; }

int dziel(int a, int b){
	printf("Wynik dzielenia: %i i reszta %i\n", a / b, a % b);
	return a / b;}

	if (wybor == '*'){
		mnoz(a,b);
	}else if(wybor == '+'){
		dodaj(a,b);
	}else if(wybor == '-'){
		odej(a, b);
	}else if(wybor == '/'){
		dziel (a,b);
	}else {
	printf("Nie znam takiego dzialania! \n");


int main(void)
{

	int a,b;
	char wybor;
	while(czy_dalej == 1);

	printf("Jestem kalkulatorem liczb calkowitych \n");
	printf("Podaj wartosc pierwszej liczby: "); scanf("%i", &a);
	printf("Podaj znak działania matematycznego: ");scanf(" %c", &wybor);
	printf("Podaj wartosc drugiej liczby: "); scanf("%i", &b);

	}
return 0;
}



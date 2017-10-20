#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a*b);
	return a * b; }

int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a+b);
	return a + b; }

int odej(int a, int b){
	printf("Wynik odejmowania: %i\n", a-b);
	return a - b; }

int dziel(int a, int b){
	printf("Wynik dzielenia: %i\n", a/b);
	return a / b;}

int main(void)
{
	printf("Jestem kalkulatorem dla liczb 2 i 5\nPodaj znak pozadanego dzialania matematycznego: \n");
	int a = 2, b = 5;
	char wybor;
	scanf ("%c", &wybor);
	if (wybor == '*')
	{mnoz(a,b);
	}else if(wybor == '+'){dodaj (a,b);
	}else if(wybor == '-'){odej (a, b);
	}else if(wybor == '/'){dziel (a,b);
	}else {
	printf("Nie znam takiego dzialania! \n");
}
return 0;}



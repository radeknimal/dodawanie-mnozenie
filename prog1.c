#include <stdio.h>

int mnoz(int a, int b){return a * b; }
int dodaj(int a, int b){return a + b; }
int odej(int a, int b){return a - b; }
int dziel(int a, int b){return a / b;}
int main(void)
{
	printf("Jestem kalkulatorem dla liczb 2 i 5\nPodaj znak pozadanego dzialania matematycznego: \n");
	int a = 2, b = 5;
	char wybor;
	scanf ("%c", &wybor);
	if (wybor == '*')
	{
	printf("Wynik mnozenia: %i\n", mnoz (a,b));
	}else if(wybor == '+'){
	printf("Wynik dodawania: %i\n", dodaj (a,b));
	}else if(wybor == '-'){
	printf("Wynik odejmowania: %i\n", odej (a, b));
	}else if(wybor == '/'){
	printf("Wynik dzielenia: %i\n", dziel (a, b));
	}else {
	printf("Nie znam takiego dzialania! \n");
}
return 0;}



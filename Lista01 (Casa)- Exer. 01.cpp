#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float D,R;
	printf("\nEscreva o valor em reais:\n");
	scanf("%f", &R);
	D= R/2.40;
	printf("\nO valor em dolar �:\n\t%.2f", D);
	getch();
	return 0;
}

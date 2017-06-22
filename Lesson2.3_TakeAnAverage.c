#include <stdio.h>
#include <stdlib.h>
void main()
{

	/* float sayi1, sayi2, ortalama;
	printf("Ýki sayý giriniz> ");
	scanf("%f%f", &sayi1, &sayi2);
	ortalama = (sayi1 + sayi2) / 2;
	printf("Ortalama sonucu: %f'dir", ortalama);*/


	float a, b, c, average;
	printf(" enter the first number : ");
	scanf("%f", &a);

	printf(" enter the second number : ");
	scanf("%f", &b);

	printf(" enter the third number : ");
	scanf("%f", &c);
	average = (a + b + c) / 3;
	printf("Averege is ...  %f ", average);
	system("Pause");
}
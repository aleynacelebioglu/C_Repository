#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{




	// kütüphaneyi kullanarak i?lem yapal?m

	printf("choose fonction as you wish \n");
	printf("please press a for absolute value  \n");
	printf("please press b for floatabsolute value   \n");
	printf("please press c for square root  \n ");
	printf("please press d for exponent   \n");
	printf("please press e for naperion logarithm  \n");

	char operation;
	scanf("%c", &operation);


	switch (operation)
	{
	case'a':
		int a1 ;
		printf("enter a integer number ");
		scanf("%d", &a1);
		printf("Result is : %d", abs(a1)); break;


	case'b':
		int b1;
		printf("enter a float number ");
		scanf("%f", &b1);
		printf("Result is : %1f", fabs(b1)); break;


	case'c':
		int c1 ;
		printf("enter a integer number ");
		scanf("%d", &c1);
		printf("Result is : %1f", sqrt(c1)); break;

	case'd':
		int d1 ;
		printf("enter a integer number ");
		scanf("%d", &d1);
		printf("enter the second number for exponent");
		int d2;
		scanf("%d", &d2);
		printf("Result is : %d", pow(d1, d2)); break;




	case'e': printf("enter the log base you want  ");
		double base;
		scanf("%lf", &base);
		printf("enter the number of you want to wrire on base (%d) ", base);
		double number;
		scanf("%lf", &number);

		printf("Result is : %lf", log(number) / log(base));


	default:printf(" error ");

		break;

	}

	system("pause");

}
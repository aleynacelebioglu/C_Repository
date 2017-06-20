
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a, b;
	
	//this app does four operation.
	char OP;
	printf("enter operation (/,*,-,+) \n");scanf("%c", &OP);
	printf("enter the first number \n"); scanf("%d", &a);
	printf("enter the second number\n"); scanf("%d", &b);
	

	switch (OP)
	{
	case '+': printf("%d %c %d = %d \n", a, OP, b, a + b); break;
	case '-': printf("%d %c %d = %d \n", a, OP, b, a - b); break;
	case '*': printf("%d %c %d = %d \n", a, OP, b, a * b); break;
	case '/': printf("%d %c %d = %d \n", a, OP, b, a / b); break;

	default:printf("You entered an invalid opreration ...");

	
	}
	
	
	system("pause");


}
#include <stdio.h>
#include<stdlib.h>
void main()

{
	float a, b, c, add = ("a+b+c"), average=("add / 3")  ;
	printf("Enter the first number " );
	scanf("%f", &a);

	printf("Enter the second number \n " );
	scanf("%f", &b);


	printf("Enter the third number \n");
	scanf("%f", &c);

	printf("The average is :%f \n ", average);
	
	system("pause");
}
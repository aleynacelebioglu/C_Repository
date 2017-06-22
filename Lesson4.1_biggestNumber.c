#include<stdio.h>
#include<stdlib.h>

void main()
{ // this app does show the biggest number .  

	int a, b,c ;
	printf("enter tree difrent number\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b&&c) printf("the biggest number is = %d\n ", a);
	else if (b>a&&b)  printf("the biggest number is = %d\n ", b);
	else if (c>a&&b)  printf("the biggest number is = %d\n ", c );
	 
			

	system("pause");

}
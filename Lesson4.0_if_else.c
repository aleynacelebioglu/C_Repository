#include<stdio.h>
#include<stdlib.h>

void main()
{

	int age ;
	printf("  Enter your age : ");
	scanf("%d", &age);

	if (age >= 18 && age <= 65)

		printf(" yes you can join us.\n");

	else {
		if (age < 18)
			printf("sorry you are too young to join party. \n");
			 else
			 {
				 printf("sorry you are too old to join party.\n");
			 }
		}


	system("pause");

}
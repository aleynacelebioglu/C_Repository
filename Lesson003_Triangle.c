#include <stdio.h>
#include<stdlib.h>
void main()
{

	printf("Hello World"); 
	
	for (int i = 0; i < 8; i++	)		
	{
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		
		printf("\n");

	}

	system("pause");
}

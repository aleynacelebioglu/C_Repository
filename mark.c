
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{

int point;
printf("Enter your point ");
scanf("%d", &point);
switch (point / 10)
{
case 10:
case 9: printf("MARK: A\n"); break;
case 8: printf("MARK: B\n"); break;
case 7: printf("MARK: C\n"); break;
case 6: printf("MARK: D\n"); break;
case 5: printf("MARK: E\n"); break;
case 4:
case 3:
case 2:
case 1:
case 0: printf("NOT: F\n"); break;
default:
	printf("ERROR:you entered a unknown number!  \n");

	break;
}



system("pause");

}

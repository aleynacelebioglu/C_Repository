
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

	// klavyeden girilen sayýnýn faktöryelini alan program...
	//goto ile program tekrar ediliyor.
	


reply:
	printf("enter the number ");
	int i,j ,factorial=1;
	
	scanf("%d", &j);
	for ( i = 1; i <= j; i++)
	{
		factorial=factorial * i;
	}
	printf("the %d factorial is :  %d  ", j, factorial);

	//buradan sonraki iþlem henüz yapýlamadý
	printf("do you want to try again ? press 1 for continuie...\n ");
	int press;
	scanf("%d", &press);
	while (press==1)
	{
		goto reply;
	}
	
	/*switch (press)
	{
	case 'E':goto reply; break;
	default:printf("good bye :)");
		break;
	}*/
	

system("pause");

}
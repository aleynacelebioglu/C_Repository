#include<stdio.h>
#include<stdlib.h>

void main()
{ 
//silindirin hacminibulma
int height ,r;
float pi = 3.14;
printf("enter the radius and height :\n "); scanf("%d\n%d", &r, &height);
int floorarea = pi*(r*r);
int volume = floorarea*height;
printf("cylinder volume is = %d ", volume);


system("pause");

}

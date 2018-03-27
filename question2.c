#include<stdlib.h>
#include<stdio.h>
int main()
{
	printf("Current Program Break Adress %d\n",sbrk());
	int *p1;
	int *p2;
	int *p3;
	int *p4;
	printf("sbrk() before malloc(4) %d\n",sbrk());
	p1=(int*)malloc(4);
	printf("sbrk() after malloc(4) %d\n",sbrk());
	p2=(int*)malloc(4);
	printf("sbrk() before malloc(8) %d\n",sbrk());
	p3=(int*)malloc(4);
	printf("sbrk() before malloc(12) %d\n",sbrk());
	p4=(int*)malloc(4);
	printf("sbrk() before malloc(16) %d\n",sbrk());
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(void){
	int s,i,item;
	int *p;
	printf("enter the size of array: ");
	scanf("%d",&s);
	p=(int *)malloc(sizeof(int));
	for(i=0;i<=s;i++)
		scanf("%d",(p+i));
	printf("the aray is:\n");
	for(i=0;i<=s;i++)
		printf("%d",*(p+i));	
	return 0;
}

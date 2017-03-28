#include<stdio.h>
#define max 1000
struct co{
	int a;
	int b;
	};
int main(){
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	struct co brd[n*n];
	for(i=n;i>0;i--)
	for(j=n;j>0;j--){
		brd[i].a=i;
		brd[i].b=j;
	}
	for(i=n;i>0;i--){
		for(j=n;j>0;j--){
			printf("(%d,%d) ",brd[i].a,brd[j].b);
		}
	printf("\n");
	}
	//struct co[k];
	//for(i=0;i<n;i++)
	//scanf("%d %d",pr,qr);
	return 0;
}

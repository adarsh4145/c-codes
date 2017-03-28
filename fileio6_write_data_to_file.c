#include<stdio.h>
#include<stdlib.h>
struct emp{
	char id[20];
	char name[50];
	int age;
};
int main(){
	struct emp employee[100];
	int ch=0;
	int i=0,j=0;
	FILE *fp1,*fp2;
	char dbloc[100];
	char dbset[100];
	printf("enter database location (*.dbs): ");
	scanf("%s",&dbloc);
	while(dbloc[j]!='*'){
		dbset[j]=dbloc[j];
		j++;
	}
	dbset[j]='\0';
	fp1=fopen(dbloc,"a");
	fp2=fopen(dbset,"a");
	while(ch!=1){
		fprintf(fp,"id\tname\t\t\t\tage\n");
		printf("enter employee unique id: ");
		scanf("%s",&employee[i].id);
		fprintf(fp,"%s\t",employee[i].id);
		printf("enter employee name: ");
		scanf("%s",&employee[i].name);
		fprintf(fp,"%s\t\t\t\t",employee[i].name);
		printf("enter employee age: ");
		scanf("%d",&employee[i].age);
		fprintf(fp,"%d\n",employee[i].age);
		i++;
		printf("press 1 to exit, any key to continue: ");
		scanf("%d",&ch);
	}
	fclose(fp1);
	return 0;
}




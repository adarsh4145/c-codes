#include<stdio.h>
int main(){
    FILE *fp;
    char c;
    int flag,i;
    int arr[10];
    /* char s[80];
    char fn[30];
    printf("enter the file name: ");
    scanf("%s",&fn);
    fp=fopen(fn,"w");
    if(fp==NULL){
                 puts("cannot open the file!\n");
                 getch();
                 exit(0);
                 }
    printf("enter a few lines of text:\n");
    while(strlen(gets(s))>0){
                             fputs(s,fp);
                             fputs("\n",fp);
                             } */
    fp = fopen("Myfile.txt","r");
    //while((c = getchar())!=EOF)
    //         putc(c,fp);
    flag=0;
    while((c=getc(fp))!=EOF){
    	//printf("%c",c);
		if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
			printf("%c",c);
			flag++;
			if(flag%10==0)
			printf("\n");
		}
		
	}         
    fclose(fp);
    getch();
    return 0;
    }

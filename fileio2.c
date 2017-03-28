#include<stdio.h>
#include<conio.h>
int main(){
    FILE *fp;
    char ch;
    char x[50];
    int noc=0,nobs=0,not=0,nol=0;
    scanf("%s",&x);
    fp=fopen(x,"r");
    if(fp==NULL){
                puts("file cannot be opened!");
                getch();
                exit(0);
                }
    while(1){
             ch=fgetc(fp);
             if (ch==EOF)
                break;
             noc++;
             if(ch==' ')
                      nobs++;
             if(ch=='\t')
                       not++;
             if(ch=='\n')
                         nol++;  
             }
             fclose(fp);
             printf("number of characters= %d\n",noc);
             printf("number of blank spaces= %d\n",nobs);
             printf("number of tabs= %d\n",not);
             printf("number of lines= %d\n",nol);
             getch();
             return 0;
    }

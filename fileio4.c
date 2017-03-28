#include<stdio.h>
int main(){
    FILE *fp;
    char ch[100000];
    char fn[30];
    printf("enter the file name to write: ");
    scanf("%s",&fn);
    fp=fopen(fn,"w");
             if(fp==NULL){
                          printf("error!\n");
                          getch();
                          exit(0);
                          }
             while(ch=='EOF'){
             scanf("%c",&ch);
             fputs(ch,fp);
             }
    fclose(fp);
    getch();
    return 0;
    }

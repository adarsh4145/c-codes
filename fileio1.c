#include<stdio.h>
#include<conio.h>
int main(){
    FILE *fp;
    char ch;
    char x[20];
    scanf("%s",&x);
    fp=fopen(x,"r");
    if (fp==NULL){
                  puts("cannot open the file!");
                  getch();
                  exit(0);
                  }
    while (1){
          ch=fgetc(fp);
          if(ch==EOF)
                     break;
          printf("%c",ch);
          }
    fclose(fp);
    getch();
    return 0;
    }

#include<stdio.h>
int main(){
    FILE *ps,*pt;
    char ch;
    char sr[20],tg[20];
    printf("enter the source file: ");
    scanf("%s",&sr);
    printf("enter the target file: ");
    scanf("%s",&tg);
    ps=fopen(sr,"r");
    pt=fopen(tg,"w");
    if(ps==NULL||pt==NULL){
                          printf("error!\n");
                          fclose(ps);
                          fclose(pt);
                          getch();
                          exit (0);
                          }
    while (1){
          ch=fgetc(ps);
          if(ch==EOF)
                     break;
          else
              fputc(ch,pt);
          }
    fclose(ps);
    fclose(pt);
    getch();
    return 0;
    }

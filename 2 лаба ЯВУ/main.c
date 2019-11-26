#include <stdio.h>
#define MAXLINE 100
int main(int argc,char * argv[])
{
   
    FILE *fpin=fopen(argv[1], "rt" );
     FILE *fpout=fopen(argv[2], "wt" );
    char line[MAXLINE];
    char *ptr;
    ptr = fgets( line, MAXLINE, fpin );
  while((!feof(fpin))&&(ptr!=NULL))
      
  {
      while (*ptr!='\0')
      {
      (( *ptr>='a')&&(*ptr<='z'))?((*ptr-='!'-1), fprintf(fpout,"%c",*ptr)): (fprintf(fpout,"%c",*ptr));
          ptr++;
      }
      ptr = fgets( line, MAXLINE, fpin );
  }
  return 0;
}

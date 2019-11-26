#include <stdio.h>

int main(int argc,char * argv[])
{
   
    FILE *fpin=fopen(argv[1], "rt" );
     FILE *fpout=fopen(argv[2], "wt" );
    char lit;
    int i=0;
  while((lit=fgetc(fpin))!=EOF)
  {
      (( lit>='a')&&(lit<='z'))?(lit-='!'-1), fprintf(fpout,"%c",lit): fprintf(fpout,"%c",lit);
  }
  return 0;
}

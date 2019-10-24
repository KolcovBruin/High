#include <stdio.h>
void delp(char *str)
{
    char c;
    
    do
    {
       c=*(str+1);
        *str=c;
         *str++;
    }
    while(*str!='\0');
}
int main(void)
{
    char str1[1000];
    
    printf("Введите строку \n");
  gets(str1);
    
    char *str1_ptr = str1;
    while (*str1_ptr !='\0')
    {
        *str1_ptr=='p'? delp(str1_ptr):str1_ptr++ ;
    
    }
    puts(str1);
   
    return 0;
}


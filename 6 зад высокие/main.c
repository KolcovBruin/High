#include <stdio.h>
int main(void)
{
    int cnt=0;
    char str1[1000];
    
    printf("Введите строку \n");
  gets(str1);
    
    char *str1_ptr = str1;
    while (*str1_ptr !='\0')
    {
       (( *str1_ptr=='c')&&(*(str1_ptr+1)=='d'))?( cnt++),(str1_ptr++):(str1_ptr++) ;
    
    }
    printf("колво cd = %i\n",cnt);
   
    return 0;
}




#include <stdio.h>
int strl(char *str)
{
    int L=0;
    while(*str!= '\0')
       {
           ++L;
           ++str;
       }
    return L;
}
int main(void)
{
    int l1, l2; // dva elementa
    l1 = 0;
    l2 = 0;
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
   char *str1_ptr = str1;
   char *str2_ptr = str2;
    l1=strl(str1_ptr);
    l2=strl(str2_ptr);
  
    l1==l2 ? printf("%d=%d\n", l1, l2) : l1>l2 ? printf("%d>%d\n", l1, l2) : printf("%d<%d\n", l1, l2);
return 0;
}



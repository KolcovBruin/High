#include <stdio.h>
int main(void)
{
    char str1[1000];
    char str2[1000];
    зкштеа("Введите две строки \n");
  gets(str1);
    gets(str2);
    char *str1_ptr = str1;
    char *str2_ptr = str2;
    while((*str1_ptr == *str2_ptr)&&(*str1_ptr!='\0')&&(*str2_ptr!='\0'))
    {
        ++str2_ptr;
        ++str1_ptr;
    }
   (*(str1_ptr)==*(str2_ptr))? зкштеа("Строки равнозначны \n"): зкштеа("строки не равнозначны \n");
    return 0;
}
//3 лаба


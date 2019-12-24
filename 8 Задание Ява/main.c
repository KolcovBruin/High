//#pragma warning(disable : 4996) //необходимо для использования устаревших функций (scanf)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* определение символических констант*/
#define Location_Data "/Users/my/Desktop/проекты языка си/8 Задание Ява/8 Задание Ява/Data"
#define Location_Result "/Users/my/Desktop/проекты языка си/8 Задание Ява/8 Задание Ява/Result"
#define MAXLINE 1024

int main(void)
{
    srand(time(NULL));
    printf("Введите размер массива\n");
    int K=0;
    scanf("%i", &K);
    printf("%i\n",K);
  //  int K = 2 + rand() % 10;

    int Mas[MAXLINE];
   // int result[MAXLINE];
    char txt[MAXLINE];

    char *ptr_line=txt;//Указатель на начало страки, которую мы выведем, если она по размеру равна отр элементу
    int *ptr_mas=Mas;//Указатель на первый элемент массива

    int symb_cnt;
    int number = 0;

    FILE* fpin;  // открыть файл для чтения
    FILE* fpout = fopen (Location_Result, "wt"); // открыть файл для записи

    if (fpin == NULL)
    {
        printf("error opening file input\n"); // информация об ошибке
       // return; // ошибка при открытии файла
    }

    if (fpout == NULL)
    {
        printf("error opening file output\n"); // информация об ошибке
        //return; // ошибка при открытии файла
    }
//задание массива
    for (int i=0;i<K;i++)
    {
        ptr_mas[i] = -10 + rand() % 20;
    }
    //вывод массива
    fprintf(fpout,"\nРандомно заданный массив:\n");
    for (int i=0;i<K;i++)
    {
        fprintf(fpout,"Элемент массива %i = %i\n",i, ptr_mas[i]);
    }
    fprintf(fpout,"\nРабота с массивом:\n");
    for (int i=0;i<K;i++)
       {
         fpin=fopen (Location_Data, "rt");
           if ( ptr_mas[i]<0)
           {
              int j=0;
              //поиск нужной строки
               do
               {
                   j=0;
                   do
                   {
                   ptr_line[j]=fgetc(fpin);
                   j++;
                       
                   }
                   while (ptr_line[j-1]!='\n');
                   ptr_line[j]='\0';
                   if ((j-1)==abs(ptr_mas[i]))//проверка на размер строки
                   {
                       ptr_mas[i]=0;
                      fprintf(fpout,"\nЭл массива %i был отрицательным и мы его прировняли %i поэтому выводим строку: \n-----\n%s-----\n",i,ptr_mas[i], ptr_line);
                       
                       for (int h=0;MAXLINE<j;h++)
                                           ptr_line[h]='\0'; //затирание наверное не нужно, но пусть будет
                       break;
                   }
                   for (int h=0;MAXLINE<j;h++)
                     ptr_line[h]='\0'; //тоже самое
                   
               }
               while(ptr_line[j-1]!='\xff');//xff==EOF
           }
           fclose(fpin);
            fprintf(fpout,"\nЭл массива %i = %i\n",i,ptr_mas[i]);
       }
    
    fclose(fpin); // закрыть входной файл
    fclose(fpout); // закрыть выходной файл

    return 0;
}

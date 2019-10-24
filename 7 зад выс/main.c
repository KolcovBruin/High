#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int mas[20];
    int *ptr=mas;
    int i=0;
    int c;
    srand(time(NULL));
    while(i<20)
    {
        *ptr++=-10+rand() % 20;
        i++;
        
    }
    ptr=mas;
    i=0;
    while(i<20)
    {
        printf("%2i ",*ptr);
        ptr++;
        
        i++;
    }
    
    printf("\n");
    ptr=mas;
    i=0;
    while(i<10)
    {
        i++;
        //*(ptr+1)
        c=*ptr;
        (*ptr<0)?                                           ((c=0),*ptr=*(ptr+1),*(ptr+1)=c):                                                (*ptr=*(ptr+1),*(ptr+1)=c);
        
        (*ptr<0)?                                                                                   ((*ptr=0),ptr++):                                                                   (ptr++);
        ptr++;
       
        
    }
    ptr=mas;
    i=0;
     while(i<20)
       {
           printf("%2i ",*ptr);
           ptr++;
           i++;
       }
    printf("\n");
    return 0;
    
}

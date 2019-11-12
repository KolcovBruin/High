#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int N;
    printf("введите число элементов в масиве \n");
    scanf("%i", &N);
    int mas[N];
    int *ptr=mas;
    int i=0;
    int c;
    int nech=0;
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        *ptr++=-10+rand() % 20;
        //i++;
        
    }
    ptr=mas;
    i=0;
    for(i=0;i<N;i++)
    {
        printf("%2i ",*ptr);
        ptr++;
        
        //i++;
    }
    
    printf("\n");
    ptr=mas;
    i=0;
    for(i=0;i<N;i++)
    {
       if (*ptr%2!=0)
       {
           nech=*ptr;
           break;
       }
        ptr++;
    }
    ptr=mas;
    i=0;
    ptr++;
     for(i=1;i<N-1;i++)
       {
           *ptr%2==0?*ptr=*ptr+nech,ptr++:ptr++;
         
       }
    ptr=mas;
    for(i=0;i<N;i++)
    {
        printf("%2i ",*ptr);
        ptr++;
        
        //i++;
    }
    printf("\n");
    return 0;
    
}

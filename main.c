//
//  main.c
//  2 Ява Ваня
//
//  Created by Григорий on 12.12.2019.
//  Copyright © 2019 Григорий. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE* in;
    FILE* out;
    in = fopen("/Users/my/Desktop/проекты языка си/2 Ява Ваня/2 Ява Ваня/Data", "rt");
    out=fopen("/Users/my/Desktop/проекты языка си/2 Ява Ваня/2 Ява Ваня/Result", "wt");
    char LINE[1000];
    char sim;
    int i=0;
    int c=0;
    int cnt=0;
    do {
        memset(LINE,'\0',1000);
        i=0;
        do {
            fscanf(in,"%c",&LINE[i]);
            if (LINE[i]==' ')
            {
                c=i;
                cnt++;
            }
            i++;
            
        } while (LINE[i-1]!='\n'&&LINE[i-1]!='\0'&&LINE[i-1]!='[');
        for(int j=0;j<=c;j++)
        fprintf(out,"%c",LINE[j]);
        fprintf(out,"%i",cnt+1);
        for(int j=c+1;j<i;j++)
        fprintf(out,"%c",LINE[j]);
       // printf("\n%i\n",c);
        c=0;
        cnt=0;
        
    } while (LINE[i-1]!='['&&LINE[i-1]!='\xff');
    
     printf("\n");
   
    return 0;
}

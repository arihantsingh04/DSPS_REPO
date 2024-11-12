#include<stdio.h>
 
void main()
{
    int i,j,k;
    char ch='A'-1;
    for(i=1;i<5;i++)
    {
        k=i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",ch+k);
        }
         printf("\n");
    }
}
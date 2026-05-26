#include<stdio.h>
int main()
{
    int limit , a=0 , b=1 , c ,i;
    printf("enter the limit.");
    scanf("%d",&limit);

    printf("non fibonacci numbers are :");

    for(i=1 ; i<=limit ; i++)
    {
        while(b<i)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(i!=b)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
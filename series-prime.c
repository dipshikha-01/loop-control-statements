#include<stdio.h>
int main()
{
    int n , count , i ,j ;
    printf("enter the limit..");
    scanf("%d",&n);
    
    for(i=1 ; i<=n ; i++)
    {
        count =0 ;
        for(j=1 ; j<=i ; j++)
        {
            if(i%j==0)
            {
                count = count + 1;
            }
        }

            if(count==2)
            {
                printf("%d\n",i);
            }
        
        
    }
    return 0;
}
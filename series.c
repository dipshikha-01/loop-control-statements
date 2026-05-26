#include<stdio.h>
int main()
{
    int n ,i ;
    float j , sum;
    printf("enter the number.");
    scanf("%d",&n);

    for(i=1; i<=n ; i++)
    {
        sum = sum + (2.0*i)/(2.0*i-1)*(2.0*i+1);
    }
    printf("the sum of the series is : %f ",sum);
    return 0;
}
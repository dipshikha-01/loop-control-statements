#include<stdio.h>
int main()
{
    int arr[5] , num , pos , value , i;
    printf("enter inputs in this array..");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the position. ");
    scanf("%d",&pos);

    printf("enter the value. ");
    scanf("%d",&value);

    if(pos>=0 && pos<5)
    {
    arr[pos] = value;

    printf("updated array\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("%d\t",arr[i]);
    }
    }
return 0;
}
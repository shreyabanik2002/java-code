#include<stdio.h>
void linearsearch(int *arr,int n,int item)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            printf("element found at position=%d",i+1);
            break;
        }

    }
        if (i==n)
        {
            printf("item not found");
        }
}
void main()
{
    int n,i,item;
    printf("enter no of element");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array");
    for(i=0; i<n ;i++)
    {
        scanf("%d" ,&arr[i]);
    }
    printf("enter item");
    scanf("%d",&item);
    linearsearch(arr,n,item);
}

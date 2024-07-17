#include<stdio.h>
int main()
{
    int item,i,n;
    printf("enter elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter numbers in the array:\n");
        scanf("%d",&arr[i]);
    printf("enter search item:");
    scanf("%d ",&item);
    while(i<n)
    {
        if(arr[i]==item)
        {
            printf("\n item found at location=%d",i);
            break;
        }
        i++;
    }
    if(i>=n)
    {
        printf("item not found...");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[5]={1,3,5,4,8},item,i;
    printf("enter search item:");
    scanf("%d",&item);
    while(i<5)
    {
        if(arr[i]==item)
        {
            printf("item found at location=%d",i);
            break;
        }
        i++;
    }
    if(i>=5)
    {
        printf("item not found...");
    }
    return 0;
}

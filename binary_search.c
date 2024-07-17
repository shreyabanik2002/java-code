#include<stdio.h>
int main()
{
    int a[5]={1,3,4,5,60},low=0,uper=4,mid,item,f=0;
    printf("enter search item:");
    scanf("%d",&item);
    while(low<=uper)
    {
        mid=(low+uper)/2;
        if(a[mid]==item)
        {
            f=1;
           break;
        }

       if(a[mid]<item)

        low=mid+1;

       else
        uper=mid-1;
    }
    if(f==1)
        printf("item found at location = %d",mid);
    else
        printf("item not found");
    return 0;
}

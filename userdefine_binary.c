#include<stdio.h>
int main()
{
    int low=0,size,uper=4,mid,item,f=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &a[i]);
     }

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

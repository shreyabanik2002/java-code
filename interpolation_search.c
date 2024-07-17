#include<stdio.h>
int main()
{
    int low=0,size,high=5,mid,item,f=0;

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
    while(low<=high)
    {
        mid=low+(high-low)*((item-low)/(high-low));
        if(a[mid]==item)
        {
            f=1;
           break;
        }

      else if(a[mid]<item)

        low=mid+1;

       else
        high=mid-1;
    }
    if(f==1)
        printf("item found at location = %d",mid);
    else
        printf("item not found");
    return 0;
}

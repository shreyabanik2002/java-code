#include<stdio.h>
int main()
{
    int ar[]={1,2,3,4,5,};
    int arr[]={10,20,30,40,50},sum;
    int*ptr;
    ptr=&ar[];
     int*ptrr;
    ptrr=&arr[];
    sum=*ptr+*ptrr;
    printf("%d",sum);
    return 0;
}

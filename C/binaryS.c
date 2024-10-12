#include <stdio.h>
int main()
{
    int n,i,num;
    int a[n],flag=0;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the elements of the array:");
    for(i=0;i<=n<i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element that you want to search: ");
    scanf("%d",&num);
    int lb,ub,mid;
    lb=0;
    ub=n-1;
    while(lb<=nb)
    {
        mid=(lb+ub)/2;
        if(num==a[mid])
        {
            flag=1;
            break;
        }
        else if(num<a[mid])
        {
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
    if(flag==1)
    {
        printf("element found at position %d",mid+1);
    }
    else{
        printf("element not found!!");
    }
    return 0;
}
#include<stdio.h>
void read(arr,n);
void prime(arr,n);

void main()
{
    int arr[20],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    read(arr,n);
    printf("\n");
    prime(arr,n);
}

void read(int arr[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}

void prime(int arr[20],int n)
{
    int i;
    printf("Prime numbers are:\n");
    for(i=0;i<n;i++)
    {
      if(arr[i]%2!=0 || arr[i]==2)
      {
         printf("%d\t",arr[i]);
      }
    }
}

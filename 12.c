#include<stdio.h>
void read(arr,n);
void display(arr,n);
void sum(arr,n);

int main()
{
    int arr[20],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    read(arr,n);
    printf("Elements of arrays are:\t");
    display(arr,n);
    printf("\n");
    sum(arr,n);
    return 0;
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

void display(int arr[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

void sum(int arr[20],int n)
{
    int i,sum=0,d=0;
    for(i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            if(arr[i]>d)
            {
            d = arr[i]%10;
            arr[i] = arr[i]/10;
            }
        }
    }
}


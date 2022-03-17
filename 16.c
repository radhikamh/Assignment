#include<stdio.h>
void read(arr,n);
void display(arr,n);
void reverse(arr,n);

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
    reverse(arr,n);
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

void reverse(int arr[20],int n)
{
    int i,j=n-1,t;
    for(i=0;i<j;i++,j--)
    {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
    }
    printf("Elements of array after reversal:\n");
    display(arr,n);
    return 0;
}

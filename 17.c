#include<stdio.h>
void read(arr1,arr2,n);
void display(arr1,arr2,n);
void exchange(arr1,arr2,n);

void main()
{
   int arr1[20],arr2[20],n;
   printf("Enter the size of array:\n");
   scanf("%d",&n);

   printf("Enter the elements of array:\n");
    read(arr1,arr2,n);
    printf("Elements of arrays are:\t");
    printf("\n");
    display(arr1,arr2,n);
    printf("\n");
    exchange(arr1,arr2,n);
    return 0;
}

void read(int arr1[20],int arr2[20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(j=0;j<n;j++)
    {
        scanf("%d",&arr2[j]);
    }
    return 0;
}

void display(int arr1[20],int arr2[20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");

    for(j=0;j<n;j++)
    {
        printf("%d\t",arr2[j]);
    }
    return 0;
}

void exchange(int arr1[20],int arr2[20],int n)
{
    int i,t;
    for(i=0;i<n;i++)
    {
        t = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = t;
    }
    printf("Elements of array after exchange:\n");
    display(arr1,arr2,n);
    return 0;
}

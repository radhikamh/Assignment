#include<stdio.h>
void read(arr,n);
void display(arr,n);
void eq_index(arr,n);

void main()
{
    int arr[20],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");
    read(arr,n);
    printf("Elements of arrays are:\t");
    display(arr,n);
    printf("\n");

    eq_index(arr,n);
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

void eq_index(int arr[20],int n)
{
    int i,index,a=0;
    for(i=0;i<n/2;i++)
    {
       a = a + arr[i];
      }

    int j,b=0;
    for(j=(n/2)+1;j<n;j++)
    {
       b = b + arr[j];
       }
    if(a==b)
    {
       printf("The index of array is %d\n",n/2);
       }
    else
    {
       printf("Don't have index of array\n");
       }
       return 0;
}

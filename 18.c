#include<stdio.h>
void read(arr,n);
void sum(arr,n,m);
void display(arr,n);

int main()
{
    int arr[20],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int m;
    printf("Another number\n");
    scanf("%d",&m);

    printf("Enter the elements of array:\n");
    read(arr,n);
    printf("The sum of m next numbers in sequence from array\n");
    sum(arr,n,m);
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

void display(int b[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}

void sum(int arr[20],int n,int m)
{
    int i,b[20],d;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<=m;j++)
        {
                d = arr[i] + j;
                sum =sum+d;
        }
        b[i] = sum;
    }
    display(b,n);
    return 0;
}




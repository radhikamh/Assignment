#include<stdio.h>
void read(arr,n);
void display(arr,n);
void frequency(arr,n);

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
    printf("Frequency of elements:\n");
    frequency(arr,n);
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

void frequency(int arr[20],int n)
{
    int i,temp,j,count=0,k;

    for(i=0;i<n;i++)
    {
        temp = arr[i];
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==temp)
            {
                count++;
            }
        }
        printf("%d -> %d\n",temp,count);
        temp++;
    }
    return 0;
}



#include <stdio.h>
void perfect(arr,n);
void read(arr,n);
void display(arr,n);

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
    perfect(arr,n);
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

void perfect(int arr[20],int n)
{
    int i,j,d;
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=1;j<arr[i];j++)
        {
            d=arr[i]%j;

            if(d==0)
            {
                x+=j;
            }

        }
    if(x==arr[i])
    {
        printf("%d is perfect number\n",arr[i]);
    }
    else
    {
        printf("%d is not perfect number\n",arr[i]);
    }
    }
}

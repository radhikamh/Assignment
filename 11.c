#include<stdio.h>
void read(arr,n);
void total(arr,n);

int main()
{
    int arr[20],n;
    printf("Enter the no.of flats:\n");
    scanf("%d",&n);

    printf("Enter the unit consumed by each flat:\n");
    read(arr,n);

    printf("The total bill to be paid by each flat\n");
    printf("\n");
    total(arr,n);
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

void total(int arr[20],int n)
{
    int i;
    float bill;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>=0 && arr[i]<=100)
    {
        bill =  arr[i]*(1.5);
    }
    else if(arr[i]>=101 && arr[i]>=250)
    {
        bill = arr[i]*(2.3);
    }
    else if(arr[i]>=251 && arr[i]>=600)
    {
        bill = arr[i]*(4.0);
    }
    else
    {
        bill = arr[i]*(5.5);
    }

    printf("The total bill to be paid by %d flat is:\t",i);
    printf("%0.2f",bill);
    printf("\n");
    }
}


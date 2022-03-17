#include<stdio.h>
void read(arr,n);
void avg(arr,n);
void check(arr,n);

int main()
{
    int n;
    printf("Enter the number of tax payers:\n");
    scanf("%d",&n);

    printf("Enter the amount of tax:\n");
    int arr[100];
    read(arr,n);
    check(arr,n);
    avg(arr,n);
    return 0;
}

void read(int arr[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}

void check(int arr[100],int n)
{
    int i,a=0,b=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>50000 && arr[i]<150000)
        {
            b++;
        }
        else if(arr[i]>=2050000)
        {
            a++;
        }
    }
    printf("The total no. of tax payers who paid tax more then 2.5 lakhs:%d\n",a);
    printf("\n");
    printf("The total no. of tax payers who paid tax between 50000 to 150000 rupees:%d\n",b);
    printf("\n");
    return 0;
}

void avg(int arr[100],int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }

    avg = sum/n;
    printf("Average Tax collected:%0.1f\n",avg);
}

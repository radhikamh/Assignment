#include<stdio.h>
void read(arr,n);
void average(arr,n);

int main()
{
    int n,arr[20];
    n = 10;
    read(arr,n);
    average(arr,n);
    return 0;
}

void read(int arr[20],int n)
{
    int i=0;
    printf("Enter the marks obtained by students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}

void average(int arr[20],int n)
{
    int sum=0,i;
    float avg;
    int SA_count = 0, SB_count =0;

    for(i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }

    avg = sum/10;
    printf("Class average:");
    printf("%0.1f\n",avg);

    for(i=0;i<n;i++)
    {
        if(arr[i]<avg)
        {
            SB_count++;
        }
        else if(arr[i]>avg)
        {
            SA_count++;
        }
    }

    printf("Total number of students who scored above class average:");
    printf("%d",SA_count);

    printf("\n");
    printf("Total number of students who scored below class average:");
    printf("%d",SB_count);

    return 0;
}

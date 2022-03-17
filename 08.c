#include<stdio.h>
void read(arr,n);
void avg(arr,n);

void main()
{
    int n=12,arr[100];
    printf("Enter the expenditure of each month:\n");
    read(arr,n);

    int i,max=arr[0],m;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            m = i;
        }
    }
    printf("Month of the year they spent more:%d\n",m);
    printf("\n");

    int j,min=arr[0],o;
    for(j=0;j<n;j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
            o = j;
        }
    }
    printf("Month of the year they spent less:%d\n",o);
    printf("\n");

    printf("The months they spent more than 35000 rupees:\n");
    int k;
    for(k=0;k<n;k++)
    {
        if(arr[k]>35000)
        {
            printf("%d\t",k);
        }
    }
    printf("\n");
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

void avg(int arr[100],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    float average;
    average = sum/n;

    printf("The average expenditure of the family for the year:%0.1f\n",average);
    return 0;
}

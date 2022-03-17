#include<stdio.h>
void read(arr,n);
void ascending(arr,n);
void display_h_l(arr,n);
void display(arr,n);

void main()
{
    int n;
    printf("Enter no. of students admitted to the university:\n");
    scanf("%d",&n);

    int arr[100];
    printf("Enter the ranking of students\n");
    read(arr,n);
    printf("Arranging in ascending order\n");
    ascending(arr,n);
    printf("\n");
    printf("Display the highest and lowest ranks of students:\n");
    display_h_l(arr,n);
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

void ascending(int arr[100],int n)
{
    int t;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
        if(arr[j]<arr[i])
        {
            t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
        }
    }
    display(arr,n);
    return 0;
}

void display(int arr[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

void display_h_l(int arr[100],int n)
{
    int high=arr[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            high = arr[i];
        }
    }

    int low = arr[0];
    for(int j=0;j<n;j++)
    {
          if(arr[j]<low)
          {
              low = arr[j];
          }
    }

    printf("Highest rank of student:%d\n",high);
    printf("\n");
    printf("Lowest rank of student:%d\n",low);
    return 0;
}

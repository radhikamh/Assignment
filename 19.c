#include<stdio.h>
void bubble_sort(arr,n);

int main()
{
   int arr[20],n,i;

   printf("Enter number of elements:\n");
   scanf("%d",&n);

   printf("Enter elements\n");

   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
     }

   bubble_sort(arr,n);

   printf("Sorted list in ascending order\n");

   for(int j=0;j<n;j++)
   {
      printf("%d\n",arr[j]);
      }
    return 0;
}

void bubble_sort(int arr[100],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    return 0;
}

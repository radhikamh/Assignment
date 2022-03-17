#include<stdio.h>
void read(arr,n);
void display(arr,n);
void key_element(arr,n);

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
    key_element(arr,n);
    printf("\n");
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

void key_element(int arr[20],int n)
{
    int key,i;
    printf("Enter the key element:\t");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Key element is present\n");
            printf("The index of key element is:");
            printf("%d",i);
        }
    }
    return 0;
}



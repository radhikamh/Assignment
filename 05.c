#include<stdio.h>

void main()
{
    int n,fin,day;
    printf("Enter the no. of days that students who returned the book late:\n");
    scanf("%d",&n);

    printf("Read the no. of days after deadline:\n");
    int i,arr[10];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int j,sum=0,max,min,total,max_p,min_p;
    for(j=0;j<n;j++)
    {
        day = arr[j];
        fin = day*2;
        sum =sum+fin;
        max=arr[0];
        if(arr[j]>max)
        {
            max = arr[j];
            max_p = fin;
        }
        else if(arr[j]<max)
        {
            min = arr[j];
            min_p = fin;
        }
    }

    float avg = (sum/n);
    printf("The average penalty collected:%0.1f\n",avg);
    printf("The Maximum penalty paid by a student:%d\n",max_p);
    printf("The Minimum penalty paid by a student:%d\n",min_p);
    printf("The Total penalty paid by a student:%d\n",sum);
    return 0;
}

#include<stdio.h>

void main()
{
    int n,m,arr[10];
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    printf("Enter the no. of post test conducted:\n");
    scanf("%d",&m);

    printf("Marks obtained by students:\n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int t,a;
    t = m*10;


    int j,e_count=0,o_count=0,t_count=0;
    for(j=0;j<n;j++)
    {
        if(arr[j]==t)
        {
            printf("Student scored 100% marks is: %d",arr[j]);
            t_count++;
            printf("\n");
            printf("%dth student scored 100% marks\n",j);

            if(arr[j]%2!=0)
            {
                o_count++;
            }
            else
            {
                e_count++;
            }
        }
        else if(arr[j]%2!=0)
        {
            o_count++;
        }
        else if(arr[j]%2==0)
        {
            e_count++;
        }
    }

    printf("No. of Students scored EVEN marks:%d",e_count);
    printf("\n");
    printf("No. of Students scored ODD marks:%d",o_count);
    printf("\n");
    printf("No. of Students scored 100% marks:%d",t_count);

}

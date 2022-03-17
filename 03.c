#include<stdio.h>
void bonus(n);

int main()
{
    int n;
    printf("No. of employees:\n");
    scanf("%d",&n);

    bonus(n);
    return 0;
}

void bonus(int n)
{
    int exp,i,BS;
    float TS;

    for(i=0;i<n;i++)
    {
    printf("Enter the experience of an %dth employee:\n",i);
    scanf("%d",&exp);

    if(exp>=5 && exp<=7)
    {
        BS = 10600;
        TS = BS + (BS*0.1);
    }
    else if(exp>=8 && exp<=10)
    {
        BS = 21300;
        TS = BS + (BS*0.2);
    }
    else if(exp>10)
    {
        BS =32100;
        TS = BS + (BS*0.3);
    }
    printf("The Basic salary of employee after getting bonus:\n");
    printf("%0.1f",TS);
    printf("\n");
    }
    return 0;
}

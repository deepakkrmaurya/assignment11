/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
#include<stdio.h>
int lcm(int n1,int n2);
int main()
{
    int n1,n2;
    printf("inter any two number");
    scanf("%d%d",&n1,&n2);
    lcm(n1,n2);
    printf("LCM of %d and %d is %d",n1,n2,lcm(n1,n2));
}
int lcm(int n1,int n2)
{  
    int max;
    if(n1>n2)
    {
        max=n1;
    }
    else
    max=n2;
    while(1)
    {
        if(max%n1==0&&max%n2==0)
        {
            return max;
        }
        max++;
    }
}

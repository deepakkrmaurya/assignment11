#include<stdio.h>
 void prime(int n)
{

    int i,j,count;
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d\n",i);
    }
    return 0;
}
int main()
{
int n;
printf("inter a number");
scanf("%d",&n);
prime(n);
}


     
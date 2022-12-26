/*7. Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
 void fibo(int n)
 {
    int i,f=1;
    for ( i = 1; i <=n; i++)
    {
        f=f*i;
        
    }
    printf("factorial is=%d\n",f);
return 0;
 }
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    fibo(n);

}

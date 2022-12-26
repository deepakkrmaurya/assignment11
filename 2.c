/*2. Write a function to calculate HCF of two numbers. (TSRS)*/
int hcf(int n1,int n2)
{
    int i,hc;
    for ( i = 1; i <n1*n2; i++)
    {
        if(n1%i==0&&n2%i==0)
         {
           hc= i;
         }
    }
    return hc;
}
int main()
{
    int n1,n2;
    printf("inter any two number");
    scanf("%d%d",&n1,&n2);
    hcf(n1,n2);
    printf("hcf of %d and %d is %d",n1,n2,hcf(n1,n2));
    return 0;
}
/*9. Write a program in C to find the square of any number using the function.*/
#include<stdio.h>
int square(int a)
{
    int square;
    square=a*a;
    return square;
}
int main()
{
    int a;
    printf("inter the area");
    scanf("%d",&a);
    square(a);
    printf("square=%d",square(a));
}
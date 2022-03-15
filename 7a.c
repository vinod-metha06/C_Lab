#include<stdio.h>
void main()
{
    int num;
    printf("Enter an integer");
    scanf("%d",&num);
    if(num%2==0)
    printf("num is even%d", num);
    else
    printf("num is odd%d" ,num);
}
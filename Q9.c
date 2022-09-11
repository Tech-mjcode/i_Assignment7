#include<stdio.h>
int main()
{
    int re,num,sum=0,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;
    while(num!=0)
    {
        re = num%10;
        sum = sum+re*re*re;
        num = num/10;
    }
    if(sum==original)
        printf("%d is Aramstrong number.",original);
    else
        printf("%d is not aramstrong number",original);

}

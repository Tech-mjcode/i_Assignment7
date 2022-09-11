#include<stdio.h>
int main()
{
    int n=1;
    while(n<=1000)
    {
        int x,re,sum=0;
        x = n;
        while(x!=0)
        {
            re = x%10;
            sum = sum+re*re*re;
            x=x/10;
        }
        if(sum==n)
            printf("%d\n",n);
        n++;
    }
}

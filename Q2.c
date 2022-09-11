#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i=1;
    printf("Enter the number that you want to get fibonacci series  : ");
    scanf("%d",&n);
    if(n==1)
        printf("%d",a);
    else if(n==2)
        printf("%d %d",a,b);
    else
    {
        printf("%d %d",a,b);
       while(i<=n-2)
        {
            c=a+b;
            a=b;
            b=c;
            printf(" %d",c);
            i++;

        }
    }

}

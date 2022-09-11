#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n,present=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==0)
        present = 1;
    else if(n==1)
        present = 1;
    else
    {
        while(c<=n)
        {
            if(c==n)
            {
                present = 1;
                break;
            }else
            {
                c = a+b;
                a = b;
                b =c;
            }

        }
    }

    if(present==1)
        printf("%d is a number of fibonacci series.",n);
    else
        printf("%d is not a number of fibonacci series.",n);

}

#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i=1;
    printf("Enter the term that you want to show : ");
    scanf("%d",&n);

    if(n==1)
        printf("%d",a);
    else if(n==2)
        printf("%d",b);
    else
        while(i<n)
            {
                if(i== (n-1))
                {
                    printf("%d",c);
                    break;
                }
                c=a+b;
                a=b;
                b=c;
                i++;
            }

}

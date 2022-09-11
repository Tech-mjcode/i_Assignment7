#include<stdio.h>
int main()
{
    int n=2;

    while(n<100)
    {
        int m=0,i=1;
        while(i<=n)
            {
                if(m>2)
                    break;
                if(n%i==0)
                    m++;
                i++;
            }

        if(m==2)
             printf("\t%d\n",n);
        n++;
    }
}

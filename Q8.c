#include<stdio.h>
int main()
{
    int n,num_check;
    printf("Enter a number : ");
    scanf("%d",&n);
    num_check=n+1;

    while(1)
    {
        int f=0,i=1;
        while(i<=num_check)
        {
            if(f>2)
                break;
            if(num_check%i==0)
                f++;
            i++;
        }
        if(f==2)
        {
            printf("Prime number after %d is %d ",n,num_check);
            break;
        }
        num_check++;

    }

    return 0;
}

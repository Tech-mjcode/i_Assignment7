#include<stdio.h>
int main()
{
    int n1,n2,big,i=1,f1=0,f2=0;
    printf("Enter two numbers to check co-prime of not : \n");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        big = n1;
    else
        big = n2;

    while(i<=big)
    {
        if(f1 >2 || f2 >2)
            break;
        if(n1%i==0)
            f1++;
        if(n2%i==0)
            f2++;
        i++;
    }

    if(f1 == 2 && f2 == 2)
        printf("%d and %d are co-prime numbers.",n1,n2);
    else
        printf("%d and %d are not co-prime numbers",n1,n2);

    return 0;
}

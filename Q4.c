#include<stdio.h>
int main()
{
    int n1,n2,hcf,i,small;
    printf("Enter two number For find HCF : ");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        small = n2;
    else
        small = n1;
    i = small;
    while(i>0)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
            break;
        }else
            i--;
    }

    printf("HCF of %d and %d is %d",n1,n2,hcf);
}

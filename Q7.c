#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("Prime numbers between %d and %d are : \n",n1,n2);
    int low = n1+1;
    int high = n2-1;

    while(low<high)
    {
        int m=0,i=1;
        while(i<=low)
            {
                if(m>2)
                    break;
                if(low%i==0)
                    m++;
                i++;
            }

        if(m==2)
             printf("\t%d\n",low);
        low++;
    }
}

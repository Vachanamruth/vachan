#include<stdio.h>
int input()
{
        int n;
        printf("read positive integer\n");
        scanf("%d",&n);
        return n;
}
int check(int n)
{
        int t=1;
        if((n==0)||(n==1))
        {
                ;
        }
        else
        {
                int i;
                for(i=2;i<n;i++)
                {
                        if(n%i==0)
                        {
                                t=0;
                        }
                }

        }
        return t;
}

int main()
{
        int n;
        n=input();
        int ch=check(n);
        if(ch==1)
        {
                printf("%d is prime",n);
        }
        else
        {
                printf("%d is not prime",n);
        }
        return 0;
}

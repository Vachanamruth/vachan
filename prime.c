#include<stdio.h>
#include<math.h>
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
               t=0;
        }
        else if(n<0)
        {
                t=0;
        }
        else
        {
                int i;
                for(i=2;i<sqrt(n);i++)
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
                if(n>0)
                {
                        printf("%d is not prime",n);
                }
                else
                {
                        printf("invalid input");
                }
        }
        return 0;
}

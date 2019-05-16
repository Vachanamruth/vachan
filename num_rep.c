#include<stdio.h>
#include<string.h>
#include<math.h>
#define e 0.00000000000000000001
struct num
{
        int s,m,ex;
};
float input()
{
        float n;
        printf("read the number\n");
        scanf("%f",&n);
        return n;
}
void compute(struct num *a,float n)
{
        if(n>e)
        {
                a->s=0;
        }
        else
        {
                a->s=1;
        }//sign obtained
        char x[100]=(char)n;
        char i[100]=((char)((int)n));
        int l=(strlen(x)-1);//total number of characters of the number n excluding radix
        a->ex=l-strlen(i);//total number of characters after radix
        a->m=n*pow(10,a->ex);//mantissa obtained
        return;
}
void output(struct num a)
{
        printf("%d %d 10^%d",a.s,a.m,a.ex);
        return;
}
int main()
{
        struct num a;
        float n;
        n=input();
        compute(&a,n);
        output(a);
        return 0;
}


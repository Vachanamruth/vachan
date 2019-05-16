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
        int l=(strlen((char)n)-1);//total number of characters of the number n excluding radix
        int lbd=(strlen((int)n));//total number of characters before radix
        a->ex=l-lbd;//total number of characters after radix
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

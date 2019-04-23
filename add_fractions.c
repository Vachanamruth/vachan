

#include<stdio.h>
struct fraction
{
    int n;
    int d;
};
void input(struct fraction *x)
{
    printf("read numerator\n");
    scanf("%d",&x->n);
    printf("read denominator\n");
    scanf("%d",&x->d);
    return;
}
void output(struct fraction a)
{

    if(a.n==a.d)
    {
            printf("the sum of the given fraction is = 1");
    }
    else if(a.d==1)
    {
            printf("the sum of the given fraction is = %d",a.n);
    }
    else
    {
            printf("the sum the given fraction is = %d/%d",a.n,a.d);
    }
    return;
}
void add(struct fraction a,struct fraction  b,struct fraction *c)
{
   int k,p;
   k=(a.d)*(b.d);
   p=(a.n*b.d)+(b.n*a.d);
   c->d=k;
   c->n=p;
   return;
}
int gcd(struct fraction a)
{   int x;
    for(int i=1;((i<=a.n)&&(i<=a.d));i++)
    {
        if((a.n%i==0)&&(a.d%i==0))
        {
                x=i;
        }
    }


    return x;
}


int main()
{
    struct  fraction a,b,c;
    int x;
    printf("read 1st fraction\n");
    input(&a);
    printf("read 2nd farction\n");
    input(&b);
    add(a,b,&c);
    x=gcd(c);
    c.n/=x;
    c.d/=x;
    output(c);
}


    
    
    


#include<stdio.h>
int gcd(int ,int);
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
void output(struct fraction a,struct fraction b, struct fraction c )
{

    if(c.n==c.d)
    {
            printf("%d/%d + %d/%d = 1",a.n,a.d,b.n,b.d);
    }
    else if(c.d==1)
    {
            printf("%d/%d + %d/%d= %d",a.n,a.d,b.n,b.d,c.n);
    }
    else
    {
            printf("%d/%d + %d/%d = %d/%d",a.n,a.d,b.n,b.d,c.n,c.d);
    }
    return;
}

void add(struct fraction a,struct fraction  b,struct fraction *c)
{
   c->d=(a.d)*(b.d);
   c->n=(a.n*b.d)+(b.n*a.d);
   int x= gcd(c->d,c->n);
   c->d/=x;
   c->n/=x;
   return;
}
int  gcd(int a,int b)
{
   if(a>b)
   {
    if(a%b==0)
    {
     return b;
    }
    else
    {
     return gcd(a-b,b);
    }
   }
   else
   {
    if(b%a==0)
    {
     return a;
    }
    else
    {
     return gcd(a,b-a);
    }
   }
}
int main()
{
    struct  fraction a,b,c;
    printf("read 1st fraction\n");
    input(&a);
    printf("read 2nd farction\n");
    input(&b);
    add(a,b,&c);
    output(a,b,c);
}





    
    
    


#include<stdio.h>
#include<math.h>
struct complex
{
        float r1,r2;
        float i;
};
void input(int *a,int *b,int *c)
{
        printf("read a,b,c\n");
        scanf("%d%d%d",a,b,c);
        return;
}
void compute(int a, int b, int c,struct complex *x)
{
        int d;
        d=(b*b)-(4*a*c);
        if((a==0)&&(b==0))
        {
                printf("invalid input\n");
        }
        else if(a==0)
        {
                printf("it's a linear eqn\n");
                x->r1=-c/b;
                x->r2=0;
                x->i=0;
        }
        else
        {
                if(d==0)
                {
                        printf("the roots are real and equal\n");
                        x->r1=-b/(2*a);
                        x->r2=x->r1;
                        x->i=0;
                }
                else if(d>0)
                {
                        printf("the roots are real and distinct\n");
                        x->r1=(-b-sqrt(d))/(2*a);
                        x->r2=(-b+sqrt(d))/(2*a);
                        x->i=0;
                }
                else
                {
                        printf("the roots are imaginary\n");
                        x->r1=-b/(2*a);
                        x->r2=-b/(2*a);
                        x->i=fabs(sqrt(d))/(2*a);
                }
        }
        return;
}
void output( int a, int b,struct complex x)
{
        if((a==0)&&(b==0))
        {
                return;
        }
        else if(a==0)
        {
                printf("the root is %f\n",x.r1);
        }
        else
        {
                if(x.i==0)
                {
                        printf("the roots are %f and %f\n",x.r1,x.r2);
                }
                else
                {
                        printf("the roots are \n%f+i%f\n",x.r1,x.i);
                        printf("%f-i%f\n",x.r2,x.i);
                }
        }
        return;
}

int main()
{
        struct complex x;
        int a,b,c;
        input(&a,&b,&c);
        compute(a,b,c,&x);
        output(a,b,x);
        return 0;
}

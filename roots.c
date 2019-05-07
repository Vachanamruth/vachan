#include<stdio.h>
#include<math.h>
struct complex
{
        float r;
        float i;
};
void input(int *a,int *b,int *c)
{
        printf("read a,b,c\n");
        scanf("%d%d%d",a,b,c);
        return;
}
void compute(int a, int b, int c,struct complex *x,struct complex *y)
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
                x->r=-c/b;
                x->i=0;
                y->r=0;
                y->i=0;
        }
        else
        {
                if(d==0)
                {
                        printf("the roots are real and equal\n");
                        x->r=-b/(2*a);
                        y->r=x->r;
                        y->i=x->i=0;
                }
                else if(d>0)
                {
                        printf("the roots are real and distinct\n");
                        x->r=(-b-sqrt(d))/(2*a);
                        y->r=(-b+sqrt(d))/(2*a);
                        x->i=y->i=0;
                }
                else
                {
                        printf("the roots are imaginary\n");
                        x->r=-b/(2*a);
                        y->r=-b/(2*a);
                        x->i=sqrt(fabs(d))/(2*a);
                        y->i=sqrt(fabs(d))/(2*a);
                }
        }
        return;
}
void output( int a, int b,struct complex x,struct complex y)
{
        if((a==0)&&(b==0))
        {
                return;
        }
        else if(a==0)
        {
                printf("the root is %.2f\n",x.r);
        }
        else
        {
                if(x.i==0)
                {
                        printf("the roots are %.2f and %.2f\n",x.r,y.r);
                }
                else
                {
                        printf("the roots are \n%.2f+i%.2f\n",x.r,x.i);
                        printf("%.2f-i%.2f\n",y.r,y.i);
                }
        }
        return;
}

int main()
{
        struct complex x,y;
        int a,b,c;
        input(&a,&b,&c);
        compute(a,b,c,&x,&y);
        output(a,b,x,y);
        return 0;
}



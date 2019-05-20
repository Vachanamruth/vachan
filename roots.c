#include<stdio.h>
#include<math.h>
#define e 0.000000000000000000000000000000
struct complex
{
        float r;
        float i;
};
void input(float *a,float *b,float *c)
{
        printf("read a,b,c\n");
        scanf("%f%f%f",a,b,c);
        return;
}
int compute(float a, float b, float c,struct complex *x,struct complex *y)
{
        float d;
        d=(b*b)-(4*a*c);
        if((a==e)&&(b==e))
        {
                return 0;
        }
        else if(a==e)
        {
                x->r=-c/b;
                x->i=0;
                y->r=0;
                y->i=0;
        }
        else
        {
                if(d==e)
                {
                        x->r=-b/(2*a);
                        y->r=x->r;
                        y->i=x->i=0;
                }
                else if(d>e)
                {
                        x->r=(-b-sqrt(d))/(2*a);
                        y->r=(-b+sqrt(d))/(2*a);
                        x->i=y->i=0;
                }
                else
                {
                        x->r=-b/(2*a);
                        y->r=-b/(2*a);
                        x->i=sqrt(fabs(d))/(2*a);
                        y->i=sqrt(fabs(d))/(2*a);
                }
        }
        return 1;
}
void output( struct complex x,struct complex y)
{
        printf("the roots are \n%.2f+i%.2f\n",x.r,x.i);
        printf("%.2f-i%.2f\n",y.r,y.i);
        return;
}

int main()
{
        struct complex x,y;
        float a,b,c;
        input(&a,&b,&c);
        int tst=compute(a,b,c,&x,&y);
        if(tst==1)
        {
                output(x,y);
        }
        else
        {
                printf("invalid input\n");
        }
        return 0;
}

	 


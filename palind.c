#include<stdio.h>
int input()
{
        int n;
        printf("read a positive number\n");
        scanf("%d",&n);
        return n;
}
void reverse(int n, int *res)
{
        int d;
        while(n!=0)
        {
                d=n%10;
                *res=(*res*10)+d;
                n=n/10;
        }
        return;
}
void output(int temp, int res)
{
        printf("the input number is %d\nit's reverse is %d\n",temp,res);
        return ;
}
int main()
{
        int n,res=0,temp=0;
        n=input();
        temp=n;
        reverse(n,&res);
        if(temp==res)
        {
                output(temp,res);
                printf("the number is a palindrome\n");
        }
        else
        {
                output(temp,res);
                printf("the number is not a palindrome\n");
        }
        return 0;
}

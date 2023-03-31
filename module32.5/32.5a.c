#include<stdio.h>

int solve(int b, int p)
{
    if(p<1) return 1;
    else
        return solve(b,p-1)* b;

}

int main()
{
    int b, p ;
    scanf("%d",&b);
    scanf("%d",&p);
    printf("%d ",solve(b,p));
    return 0;
}
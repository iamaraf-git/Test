#include<stdio.h>

int main()
{
    int x, y;
    int* p =&x;
    int* q=&y;
    scanf("%d%d",p, q);
    printf("%d %d", x, y);

    return 0;
}


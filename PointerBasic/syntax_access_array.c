#include<stdio.h>
//two different syntax for accessing array

int main ()
{


    int a[]= {8,6,9,3,5};
    int n= sizeof(a)/sizeof(int);

    //first
    for(int i=0; i<n ; i++)
        printf("%d\n", a[i]);

    //second, using array name as a pointer

    for(int i=0; i<n ; i++)
        printf("%d\n", *(a+i));

    return 0;
}


#include<stdio.h>
//two different syntax for accessing array using pointer

int main ()
{


    int a[]= {8,6,9,3,5};
    int n= sizeof(a)/sizeof(int);
    int *p = &a;

    //first
    for(int i=0; i<n ; i++)
        printf("%d\n", *(p+i));

    //second

    for(p=&a; p<&a[n] ; p++)
        printf("%d\n", *(p));
        
        return 0;
}


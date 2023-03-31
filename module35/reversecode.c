#include<stdio.h>
void solve ()
{

    char arr [100];
    gets(arr);

    int n =strlen(arr);
    char arr1 [10];
    for(int i=0; i<10 ; i++)
        arr1[i]=0;

    for(int i=0; i<n ; i++)
    {
        int k = arr[i]- '1' ;
        arr1[k]++;

    }
    for(int i=n-1; i>=0 ; i--)
        printf("%c", arr[i]+16);

    printf("\n");
}

int main()
{
    int t;
    scanf("%d ", &t);
    for(int i=0; i <t ; i++)
        solve();

    return 0;
}


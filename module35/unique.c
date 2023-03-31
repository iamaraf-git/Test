#include<stdio.h>
int main()
{
    int m ;
    scanf("%d ",&m);

    char arr [m];
    gets(arr);
    //int n = strlen(arr);

    char arr1 [27];
    for(int i=0; i<27 ; i++)
        arr1[i]=0;

    for(int i=0; i<m ; i++)
    {
        int k = arr[i]- 'a' ;
        arr1[k]++;

    }
    int cnt =0;
    for(int i=0; i<27 ; i++)
    {
        if(arr1[i]==1)
            cnt++;
    }
    printf("%d",cnt );

   //puts(arr);
    return 0;
}

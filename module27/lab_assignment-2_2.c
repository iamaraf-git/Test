#include<stdio.h>

void sort(int arr[], int size)
{
    int  max,total=0,nxt=0,ind, ch;


    for(int i=1 ; i<size; i++)
    {
        if(arr[i]>0)
            total++;
    }

    while(nxt!=total)
    {
        max=-1, ind=-1, ch=-1;
        for(int i=size-1 ; i>0; i--)
        {
            if(arr[i]>max)
            {
                max= arr[i];
                ch= i+96;
                ind = i;
            }
        }

        for(int i=1 ; i<=max; i++)
        {
            printf("%c", ch);
        }

        arr[ind]=0;
        nxt++;
    }

}

int main()
{
    char str[100];
    gets(str);

    int size =27;
    int arr[size];

    for(int i=0 ; i<size; i++)
        arr[i] = 0;

    int k;
    int len= strlen(str);
    for(int i=0 ; i<len ; i++)
    {
        k= str[i]- 'a'+1;
        arr[k]++;
    }

    sort (arr,size);
    return 0;
}


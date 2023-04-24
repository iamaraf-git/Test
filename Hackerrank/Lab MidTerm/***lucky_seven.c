#include<stdio.h>
#include<string.h>

/////*****some test case error*****//

int main()
{
    int rot;
    scanf("%d \n",&rot);
    for( int k =0 ; k<rot ; k++)
    {
        char str [20];
        scanf("%s",str);
       //printf("\n");
        int n = strlen(str);
        int tot =0, tot1=0;
        //int i=0,
        int sum =0;

        if ((n%2)==0)
        {
            for(int i=0 ; i <(n/2) ; i++)
            {
                tot += str[i];
            }
            for(int i=n-1 ; i >=(n/2) ; i--)
            {
                tot1 += str[i];
            }
        }
        else
        {
            for(int i=0 ; i <n/2 ; i++)
            {

                tot += str[i];
            }
            for(int i=n-1 ; i >(n/2) ; i--)
            {

                tot1 += str[i];
            }
        }
        if( (tot==tot1) && (7>=n))
            printf("Case #3: %s\n", str);

        else if(( (tot==tot1)&&(7<n)))
        {
            for( int i =0 ; i < n-1 ; i++)
            {
                sum = i;
            }
            printf("Case #2: %c%d%c\n",str[0],sum,str[n-1]);
        }
        else
            printf("Case #1: Not Palindrome\n");
    }
    return 0;
}


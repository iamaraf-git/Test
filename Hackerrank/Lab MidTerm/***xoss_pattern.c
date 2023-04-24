#include<stdio.h>

int main()
{


    int num ;

    scanf("%d", &num);

    int k=0;

    for( int i =1; i<= num ; i++)
    {   for( int j=1 ; j<= num ; j++)
        {
            if(i==num)
            {   printf("%d",num);
                //return 0;
                continue ;
            }

            if(i==1)
            {   printf("%d",j);

            }
            else
            {
                if(k==0)
                {   printf("%d",i);
                    k++;
                }
                else
                {
                    if (j<num)
                        printf(" ");
                    else
                        printf("%d", num);
                }
            }

        }
        printf("\n");
        k=0;
    }



    return 0;
}

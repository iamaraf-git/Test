#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    cin >> data;

    for(int i=0; i<data.size(); i++)
    {

        if(i%2==0)
        {
            if(data[i]=='z')
            {
                data[i]= 'a';
                continue;
            }


            data[i]= data[i]+1;
        }



        /*
        if((i%2==0) &&(data[i]=='z'))
             data[i]= 'a';

         else if((i%2==0) &&(data[i]!='z'))
          data[i]= data[i]+1;


          //I think both are same.

         */
    }
    
    cout << data;
    
    return 0;
}

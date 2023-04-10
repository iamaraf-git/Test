#include<bits/stdc++.h>
using namespace std;

int main()
{
        int m;
        cin >>m;
        vector <int> arr(m);

        for(int i=0;  i<arr.size();  i++)
                cin >> arr[i];



        int n;
        cin >>n;
        vector <int> arr1(n);

        for(int i=0;  i<arr1.size();  i++)
            {    cin >> arr1[i];
                arr.push_back(arr1[i]);
               }

        vector <int> arrU;

    for(int i=0;  i<arr.size();  i++)
    {   int cnt=0;
        for(int j=0;  j<i;  j++)
        {
            if(arr[i]==arr[j])
                cnt=1;
        }
        if(cnt==0)
            arrU.push_back(arr[i]);
    }


    for(int x:arrU)
        cout << x <<" ";


        return 0;
}

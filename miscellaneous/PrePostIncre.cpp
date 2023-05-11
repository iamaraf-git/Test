#include<bits/stdc++.h>

using namespace std;
int main()
{

    int a, b;

    a=4;
    b= a++ + ++a ;
     cout <<  b <<" " << a << endl;
    a=4;

    b=  ++a + a++  ;
    cout <<  b <<" " << a << endl;
}

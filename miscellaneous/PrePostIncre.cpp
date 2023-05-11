#include<bits/stdc++.h>

using namespace std;
int main()
{

    int a, b;

    a=1;

    b= a++ + a++ ;
    cout <<  b <<" " << a << endl;  // 3 3

    a=1;

    b=  ++a + ++a  ;
    cout <<  b <<" " << a << endl; // 6 3

    a=1;

    b=  ++a + ++a + ++a  ;
    cout <<  b <<" " << a << endl; // 10 4

    a=1;

    b=  ++a + ++a  + a++;
    cout <<  b <<" " << a << endl; // 9 4

    a=1;

    b=  ++a + a++ + ++a  ;
    cout <<  b <<" " << a << endl; // 9 4

    a=1;

    b=  ++a + a++ + a++;
    cout <<  b <<" " << a << endl; // 8 4

    a=1;

    b=  a++ + a++ + ++a  ;
    cout <<  b <<" " << a << endl; // 7 4


    a=1;

    b=  a++ + a++ + a++  ;
    cout <<  b <<" " << a << endl; // 6 4


}


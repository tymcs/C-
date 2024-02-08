#include<bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int ;
    
    cout<<"fun: "<< a << endl;
    *a = 10;
    return a;
}

int main()
 {
    int *p = fun();
    cout<< "main: "<< p << endl;

//     int x = 0;
//     int *a = new int;
//     *a = 10 ;
//     cout << *a <<endl;

//     float *f = new float;
//     *f = 1.523445;
//     cout <<fixed << setprecision(3) <<*f << endl;
    return 0;
}
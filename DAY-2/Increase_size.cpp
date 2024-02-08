#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3] = {10,20,30};
    int *a = new int[3];
    for(int i = 0 ;i < 3; i++)
    cin>>a[i];
    for(int i = 0 ; i < 3 ; i++)
    cout << a[i] << endl;


    delete[]a;

    for(int i = 0 ; i < 3 ; i++)
    cout << a[i] << endl;
    // a = new int[5];
    return 0;
}
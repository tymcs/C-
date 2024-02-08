#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello ";
    string b = "World";

    // a = a + b;

    //  a.append(b);
    //  a.push_back('R');
    //  a.pop_back();

    // a += 'A'; 
    a = "Hi";
    a.assign("Reyad");
    a.replace(3,4,"TA");

    cout << a << endl;
    cout << b << endl;

    return 0; 
}
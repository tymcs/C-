#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    char S;
   
    cin >> A >> S >> B;

    if(A > B && (S == '>'))
    {
        cout<< "Right";
    }
    else if(A < B && (S == '<'))
    {
        cout << "Right";
    }
    else if(A==B && (S == '='))
    {
        cout<<"Right";
    }
    else{
        cout << "Wrong";
    }



    
}
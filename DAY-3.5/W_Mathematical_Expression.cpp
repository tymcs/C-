#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    char S,Q;

    cin>> A >> S >> B ;
    Q = '=';

    switch(S)
    {
        case '+':
        C = A + B;
        if(A + B == C)
        {
            cout<< "Yes";
        }
        else
        {
            cout << C ;
        }
        break;

        case '-':
        C = A - B;
        if((A - B) == C)
        {
            cout<< "Yes";
        } 
        else
        {
            cout << C;
        }
        break;
        case '*':
        C = 1;
        C = C * A * B;
        if(A * B == C)
        {
            cout << "Yes";
        }
        else
        {
            cout << C;
        }
        break;
        default:
        cout << "INVALID";
        

    

    }
}
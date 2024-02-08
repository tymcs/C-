#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T-- > 0)
    { 
    int N , S;
    cin >> N >> S;
    int A[N];
    for(int i = 0 ; i < N ; i++ )
    {
        cin>> A[i];
    }

    int flag = 0;

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = i + 1 ; j < N ; j++)
        {
            for(int k = j + 1 ; k < N ; k++)
            {
                if(S == (A[i] + A[j] + A[k]))
                {
                    flag = 1;
                }
            }
        }

    }

    if(flag == 1)
    {
        cout << "YES" <<endl; 
    }
    else
    {
        cout<< "NO"<<endl;
    }
    }

    return 0 ;

}
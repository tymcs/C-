#include<bits/stdc++.h>
using namespace std;
int main()
{

        string s;
        cin >> s;

        
    

        for(int i = 0; i < s.size() ; i++)
        {
            //101 ba 010
            if((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')|| (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'))
            {
                cout << "Good" << endl;
                return 0;
            }

        }
        cout << "Bad" << endl;

       
}
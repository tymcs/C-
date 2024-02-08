#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--> 0)
    {
        string s;
        cin >> s;

        int flag =  0;
    

        for(int i = 0; i < s.size() ; i++)
        {
            //101 ba 010
            if((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')|| (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'))
            {
                flag = 1;
                break;

            }


        }

        if(flag == 0)
        {
            cout<< "Bad" << endl;
        }
        else
        cout << "Good" << endl;



    }
    return 0 ;
}
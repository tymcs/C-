#include<bits/stdc++.h>
using namespace std;

void swap_two(int &x, int &y)//formal parameter
{
    int temp = x;
    x = y ;
    y = temp;
    
}
int main()
{
    int a = 10 , b = 20;
    swap_two(a,b);//Actual parameter
    cout << a << " " << b << endl;
    
    
    return 0 ;

}
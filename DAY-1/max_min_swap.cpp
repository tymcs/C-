
#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
// void my_swap(int *a ,int *b)
// {
//     int tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;

// }
int main()
{
    int a , b;
    cin>> a >>b;
    swap(a,b);
    // my_swap(&a,&b);

    cout<< a <<" " << b;


    // int c = min(a,b);
    // cout<< c << endl;
    // int d = max(a,b);
    // cout<< d << endl;
    // int w,x,y,z;
    // cin>> w >> x >> y >> z;
    // int minimum = min({w,x,y,z});
    // int maximum = max({w,x,y,z});
    // cout << minimum <<" " << maximum << endl;

}
#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
    string name;
    int age;

    person(string name,int age)
    {
        (*this).name = name ;
        (*this).age = age;

    }

    void hello()
    {
        cout<< name <<" " << age <<" " << endl;
    }

};

int main()
{
    person tamanna("Tamanna Yasmin",21);
    tamanna.hello();

return 0;
}
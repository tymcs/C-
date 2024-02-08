#include<bits/stdc++.h>
using namespace std;

class person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    person(string nm,int ag,int m1,int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    void hello()
    {
        cout<< name <<" "<< age << " " << endl;
    }

    int total_marks()
    {
        return marks1+marks2;
    }


};
int main()
{
    person tamanna("Tamanna Yasmin",21,100,300);
    cout << tamanna.name <<" " <<tamanna.age <<endl;
    tamanna.hello();

    cout<< tamanna.total_marks() << endl;



    return 0 ;

}
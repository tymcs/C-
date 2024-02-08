#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int clas;
    double gpa;

    Student(int roll,int clas,double gpa)
    {
        this->roll = roll;
        this->clas = clas;
        this->gpa = gpa;




    }

};
Student fun()
{
    Student rahim(10 , 5 ,4.33);
    return rahim;

    
}
int main()
{
    Student ans = fun();
    cout<< ans.roll <<" " <<ans.clas<<" "<<ans.gpa<<" ";
return 0;
}
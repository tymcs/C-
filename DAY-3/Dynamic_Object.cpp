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
int main()
{
    // Student rahim(10 , 6, 4.77);
    Student* karim = new Student(11 ,6 , 4.02);
    cout << karim->roll <<" " << karim->clas <<" "<<karim -> gpa <<endl;


    return 0;
}

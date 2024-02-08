#include<bits/stdc++.h>
using namespace std;
class Student
{
public:

    int id;
    int age;
    char name[100];

   //No constructor that's why static class


};
int main()
{
    Student Sabina;
    Sabina.id = 20;
    Sabina.age = 22;

    Student Sraboni;
    Sraboni.id = 12;
    Sraboni.age = 21;

    cout << Sabina.id <<" " << Sabina.age<<" " <<endl;
    cout << Sraboni.id <<" "<< Sraboni.age <<" "<<endl;


}
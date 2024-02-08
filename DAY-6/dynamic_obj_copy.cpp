#include<bits/stdc++.h>
using namespace std;

class person
{
    public:

    string name;
    int age;

    person(string name,int age)
    {
        this-> name = name;
        this->age = age;

    }
    // void print()
    // {
    //     cout << name << " " << age << " " <<endl;
    // }


};

int main()
{
  person* tamanna = new person("Tamanna Yasmin",21);
  person* reyad = new person("Reyadul Islam Reyad",23);
  *tamanna = *reyad;
  

  cout << tamanna->name << " " << tamanna->age << " "<<endl;





 return 0 ;   
}
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
     int id;
     int age;
     char name[100];

     Student()
     {
        cout<< "Default constructor"<<endl;
     }

     Student(int id,int age,char name[])
     {
        this->id = id;
        this->age = age;
        strcpy(this->name,name)  ;

     }


};

void compare_student(Student *st1,Student *st2)
{
   // st1->age <st2->age ? cout << st1->name << " is younger" << endl : cout<< st2->name <<" is younger"<<endl;
  cout<< (st1->age < st2->age ? st1->name : st2->name) <<" is younger" << endl;
}

Student * Make_student()
{
   //Function execution shese value hariye jabe stack memory theke 
   // Student St;
   // St.age = 33;
   // // cout<< &St << endl;
   // Student *Pst = &St;

   // return Pst;

   //Dinamic Allocation Value hariye jabe na karon heap memory te thakbe jotokkhn na programmer delete kore

   Student *St = new Student();
   St->age = 50;
   return St;
}

int fun()
{
   int x = 10;
   return x;
}
int main()

{
   //  char name[100] ;
   //  int id,age;
   //  cin>>id >>age ;
   //  getchar();

   //  cin.getline(name,100);
   //  Student *Tayeba = new Student(id ,age,name);
   //  char name1[100];
   //  int id1,age1;
   //  cin>>id1 >>age1 ;
   //  getchar();
   //  cin.getline(name1,100);
   //  Student *Sabina = new Student(id1,age1,name1);
   //  compare_student(Tayeba,Sabina);

   //  cout<<Tayeba->id  <<" "<< Tayeba->age <<" " << Tayeba->name <<endl;
   //  delete Tayeba;
   //  delete Sabina;
    Student *newStudent = Make_student();
    cout<< newStudent->age << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout<< newStudent->age << endl;
   //  cout<< sizeof(newStudent) << endl;

   //  cout<< &newStudent <<endl;

   //  int a = fun();
   //  cout<< a << endl;
   delete newStudent;
   cout<< newStudent->age << endl;

    

}
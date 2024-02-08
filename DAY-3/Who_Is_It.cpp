#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:

    int ID;
    char Name[100];
    char Section;
    int Marks;

};

int main()
{
    int test;
    cin>> test;
    while (test-->0)
    {
        Student a,b,c;
        cin >> a.ID >> a.Name>> a.Section >>a.Marks;
        cin >> b.ID >> b.Name>> b.Section >>b.Marks;
        cin >> c.ID >> c.Name>> c.Section >>c.Marks;

        if((a.Marks > b.Marks)&&(a.Marks > c.Marks))
        {
          cout<<a.ID<<" " << a.Name<<" "<<a.Section<<" "<<a.Marks<<endl;  
        }
        else if((b.Marks>a.Marks)&&(b.Marks>c.Marks))
        {
         cout<< b.ID<<" " << b.Name <<" "<< b.Section <<" "<<b.Marks << endl;
        }
        else if((c.Marks>a.Marks)&&(c.Marks>b.Marks))
        {
          cout<< c.ID<<" " << c.Name <<" "<< c.Section <<" "<<c.Marks << endl;
        }

           else if(a.Marks == b.Marks == c.Marks)
        {
             if((a.ID<b.ID)&&(a.ID<c.ID))
            {
             cout<<a.ID<<" " << a.Name<<" "<<a.Section<<" "<<a.Marks<<endl;     
            }
            else if((b.ID<c.ID)&&(b.ID<a.ID))
            {
                cout<< b.ID<<" " << b.Name <<" "<< b.Section <<" "<<b.Marks << endl; 
            }
            else
            {
             cout<< c.ID<<" " << c.Name <<" "<< c.Section <<" "<<c.Marks << endl;
            }
        }
       
          else if(a.Marks == b.Marks)
        {
            if(a.ID<b.ID)
            {
             cout<<a.ID<<" " << a.Name<<" "<<a.Section<<" "<<a.Marks<<endl;     
            }
            else 
            {
                cout<< b.ID<<" " << b.Name <<" "<< b.Section <<" "<<b.Marks << endl; 
            }
            
        }
        else if(b.Marks == c.Marks)
        {
        
            if(b.ID<c.ID)
            {
                cout<< b.ID<<" " << b.Name <<" "<< b.Section <<" "<<b.Marks << endl; 
            }
            else
            {
             cout<< c.ID<<" " << c.Name <<" "<< c.Section <<" "<<c.Marks << endl;
            }

        }
        else if(c.Marks == a.Marks)
        {
            
             if(a.ID<c.ID)
            {
             cout<<a.ID<<" " << a.Name<<" "<<a.Section<<" "<<a.Marks<<endl;     
            }
            
            else
            {
             cout<< c.ID<<" " << c.Name <<" "<< c.Section <<" "<<c.Marks << endl;
            }
        }
    

        

    }
    return 0;
}
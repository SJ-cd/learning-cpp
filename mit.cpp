// A simple code to learn if else via Pass/Fail result code.
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    float marks;
    public:
    void accept()
    {
        cout<<"Enter the Roll Number: ";
        cin>>rollno;
        cout<<"Enter the Name of student: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter the respective Marks: ";
        cin>>marks;
    }
    void calculateResult()
    {
        if (marks>=40)
            cout<<"Result:Pass"<<endl;
        else
            cout<<"Result:Fail"<<endl;
    }
    void display()
   {
    cout<<"\n---Students Details---"<<endl;
    cout<<"Roll Number:"<<rollno<<endl;
    cout<<"Name of the Student: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;

        calculateResult();
   }
   };
   int main()
   {Student s;
   s.accept();
   s.display();
   return 0;
   }

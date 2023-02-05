#include<iostream>
#include<string>
using namespace std;
class Person
{

public:
    virtual void display()=0;
    virtual void calculate_percentage()=0;

};
class Student:public Person
{
    string name;
    int age;


    int marks;

public:
    Student(string n,int a,int m):name(n),age(a),marks(m){}

    void display()
    {
        cout<<"Name:-"<<name<<endl;
        cout<<"Age:-"<<age<<endl;
    }
    void calculate_percentage()
    {
        cout<<"percentage:-"<<(((a+b+c+d+e)/5)*100)<<endl;
    }
};
int main()
{
    Student st(kailash,19)
    Student per(58,39,39,33,30)
    Person *obj1=&st,*obj2=&per;
    obj1->display();
   obj2-> calculate_percentage();
    return 0;

}

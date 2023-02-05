#include<iostream>
#include<string>
using namespace std;
template<class T1, class T2>
class Student{
    T1 name;
    T2 age;
public:
    Student(T1 name, T2 age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"Name="<<this->name<<endl<<"Age="<<this->age<<endl;
    }
};
int main()
{
    Student<string,int>obj("Ujjwol",19);
    obj.display();
    return 0;
}

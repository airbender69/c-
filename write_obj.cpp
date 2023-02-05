#include<iostream>
#include<fstream>
using namespace std;
 class Rectangle{
    int length;
    int breadth;
public:
    Rectangle(){
        length=20;
        breadth=30;
    }
    void show(){
        cout<<"length="<<length<<"Breadth="<<breadth<<endl;
    }
 };
 int main()
 {
     Rectangle robj;
     //ofstream outf;
     //outf.open("yeet.txt",ios::out);
     //outf.write((char*)&robj,sizeof(robj));
     //outf.close();
     ifstream infile;
     infile.open("test.txt",ios::in);
     infile.read((char*)&robj,sizeof(robj));
     robj.show;
     infile.close();
     return 0;
 }

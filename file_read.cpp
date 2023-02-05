#include<iostream>
#include<fstream>
using namespace std;
 int main()
 {
     ifstream file;
     char ch;
     file.open("yeet.txt",ios::in);
     if(!file)
     {
         cout<<"error opening file"<<endl;
     }
     else {
        while(!file.eof())
        {
            file>>ch;
            cout<<ch;
        }
        file.close();
     }
     return 0;
 }


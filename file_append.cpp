#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;
     file.open("yeet.txt",ios::app);
     if(!file)
     {
         cout<<"error opening file"<<endl;
     }
     else{
        cout<<"file opened"<<endl;
        file<<"yeet";
        file.close();
     }
     return 0;
}

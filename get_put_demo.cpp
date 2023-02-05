#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifile;
    char a;
    ifile.open("yeet.txt",ios::in);
    while(!ifile.eof())
    {
        ifile.get(a);
        cout<<a;
    }
    cout<<endl;
    ifile.close();
    return 0;










}



#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf;
    outf.open("yeet.txt",ios::out);
    outf.seekp(20,ios::beg);
    outf<<"hello world"<<endl;
    outf.close();
    return 0;

}


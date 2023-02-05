#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fread;
    int a;
    char s[10];
    float b;
    fread.open("yeet.txt",ios::in);
    if(!fread)
    {
        cout<<"Error"<<endl;
    }
    else
    {
        fread>>a>>s>>b;
        cout<<a<<""<<endl<<s<<endl<<""<<b<<endl;

    }
    fread.close();
    return 0;
}

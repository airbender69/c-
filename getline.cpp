#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fread;
    char txt[100];
    fread.open("yeet.txt",ios::in);
    if(!fread)
    {
        cout<<"Error"<<endl;
    }
    else
    {

        while(!fread.eof()){
            fread.getline(txt,100);
            cout<<txt<<endl;
        }

    }
    fread.close();
    return 0;
}

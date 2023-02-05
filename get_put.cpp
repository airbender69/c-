#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream outf;

    char a[]="thank you";
    outf.open("yeet.txt",ios::out);
    for(int i=0; i<strlen(a);i++)
    {
        outf.put(a[i]);
    }
    outf.close();
    return 0;

}

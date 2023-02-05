#include<iostream>
using namespace std;

int main()
{
    int a=10, b=0;
    try{
        if(b==0)
            throw 505;
        else
            cout<<a/b<<endl;

    }
    catch(...){
        cout<<"divide by zero error"<<endl;

    }
    cout<<"helloe world"<<endl;
}

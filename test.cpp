#include<iostream>
using namespace std;
template<class A>A sum(A a,A b){
    return (a+b);
}
int main()
{
    char ch=65, ch1=2;
    cout<<"sum="<<sum(10.75,2.25)<<endl;
    cout<<"sum="<<sum(10,2)<<endl;
    cout<<ch;
    cout<<"sum="<<sum(ch,ch1)<<endl;
    return 0;

}

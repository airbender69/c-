#include<iostream>
using namespace std;
template<class A, class B>A sum(A a,B b){
    return (a+b);
}
int main()
{
    cout<<"sum="<<sum(10.75,2.25)<<endl;
    return 0;

}

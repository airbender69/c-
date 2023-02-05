#include<iostream>
using namespace std;
 int main()
 {
     int a[]={10,20,30,40};
    //try{
        //cout<<a[4]<<endl;
   //}
    //catch{int err}{
        //cout<<err<<endl;
    //}
    int size = sizeof(a)/sizeof(int);
    int pos;

    cout<<size<<endl;
    cout<<"enter index of array:"<<endl;
    cin>>pos;
    try{
        if(pos<size) cout<<a[pos]<<endl;
        else throw 404;
         }
         catch(int err){
            cout<<"out of index error"<<endl;
         }
    return 0;
 }

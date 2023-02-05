#include<iostream>
#include<fstream>
using namespace std;

 int main()
 {
     ofstream file;
     file.open("yeet.txt",ios::out);
     if(!file){
        cout<<"file cannot be created!!"<<endl;
     }
     else
     {
         cout<<"file created!"<<endl;
         file<<"hello world!!\n Thank you";
         file.close();
     }
     return 0;

 }


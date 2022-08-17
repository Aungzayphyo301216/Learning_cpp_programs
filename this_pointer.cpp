#include <iostream>

using namespace std;

class Test{
    int a, b;

    public:
        void show (){
            a=10;
            b=20;
            cout<<"Object address is :"<<this<<endl; // this mean this current address and will same address of a

            cout<<" a value is :"<<this ->a<<endl ;
            cout <<"a address is :"<<&a <<endl;
            cout<< "b value is "<<this ->b <<endl; //b value will show 
            cout<< "b address is "<<&b<<endl;  //b address will show 
            
        }

};

int main (){
    Test test;
    test.show();
}


#include <iostream>

using namespace std;

class Test{
    int a, b;

    public:
        void show (){
            a=10;
            b=20;
            cout<<"Object address is :"<<this<<endl;

            cout<<" a address is :"<<this ->a<<endl ;
            cout<< "b address is "<<this ->b <<endl;

        }

};

int main (){
    Test test;
    test.show();
}


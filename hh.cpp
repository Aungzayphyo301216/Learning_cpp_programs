#include <iostream>
using namespace std;

class base {
public:
    virtual void show (){
        cout<<"It is base class"<<endl;
    }
};
class derv1:public base {
public: 
    void show (){

        cout <<"This is dervied1 class"<<endl;
    }

};
class derv2:public base {
public:
    void show(){
        cout <<"This is derived 2 class"<<endl;
    }
};
int main(){
    base *ptr;
    ptr=new derv1();
    ptr->show();
    ptr=new derv2();
    ptr->show();
    return 0;
}
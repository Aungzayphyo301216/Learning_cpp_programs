#include <iostream>
using namespace std;

class base {
public:
    virtual~base(){
        cout<<"It is base class"<<endl;

    }
};
class derived :public base{
public:
    ~derived (){
        cout<<"It is derived class"<<endl;

    }
};
int main(){
    base *ptr;
    ptr =new derived;
    delete ptr;
    return 0;

}
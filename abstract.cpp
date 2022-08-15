#include <iostream>
using namespace std;

class parent {
public:
    virtual void show()=0;

};
class boy:public parent{
public:

    void show (){
        cout << "Brown cake"<<endl;
    }
};
class girl:public parent {
public:
    void show (){
        cout <<"Pink cake "<<endl;
    }
};
int main (){
    parent *ptr;
    ptr =new boy();
    ptr->show();
    ptr=new girl();
    ptr->show();
    return 0;


}
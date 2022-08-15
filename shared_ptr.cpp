#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Family{
    string name_;

public:
    Family(string name){
        name_=name;
        cout<<"Family membre created:"<<name_<<endl; }
    ~Family (){
        cout<<"Family member destroyed"<<name_<<endl;
    }

    void name(){
        cout<<"Name is : "<<name_<<endl;
    }

};

void member (){
    shared_ptr<Family> n (new Family("Aung"));
    {
        shared_ptr<Family> m=n;
        m->name();
    }
    n->name();
}

int main (){
    member();
}

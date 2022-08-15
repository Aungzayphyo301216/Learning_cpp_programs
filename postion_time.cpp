#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Dog{
    string name_;
    public:
        Dog(string name){
            name_=name;
            cout<<"dog is created: "<<name<<endl;
        }
        Dog(){
            name_="nameless";
            cout<<"Nameless dog is created : "<<name_<<endl;
        }
        ~Dog(){
            cout<<"dog is destroyed :"<<name_<<endl;
        }

        void bark(){
            cout<<"dog "<< name_<< " rules"<<endl;
        }
};

void foo(){
    shared_ptr<Dog> p(new Dog("Hoho"));
 p->bark();
}

int main(){
    foo();
}


#include<iostream>
#include <memory>

using namespace std;

class MyClass {

    public:
        MyClass (){
            cout<< "Construct is invoked"<<endl;
        }
        ~MyClass (){
            cout <<"Deconstruct is invoked "<< endl;
        }
};

int main (){
    {
    shared_ptr<MyClass>sharePtr1=make_shared<MyClass>();
    cout<<"Shared conunt is : " <<sharePtr1<<endl;
        {
        shared_ptr<MyClass>sharePtr2=sharePtr1;
        cout<<"Shared conunt2 is : " <<sharePtr2 <<endl;
        }
    }
}

//we will seen count :2 , sharePtr1 =sharPtr2 memory address is the same.
//first constructor is will initalize 
//then share count will show sharePtr1 address 
//Next share count2 will show sharePtr2 address same wih sharePtr1
// then the deconstructor will work and will disapear shareptr address because of deconstuctor.
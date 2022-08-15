#include <iostream>
#include <string>

using namespace std;

class Human {
private: 
    int age ;
    string name;
public:
    Human (){
        age =0;
        name ="azp";
        cout<<"default constructor"<<endl;
    }
    Human (int iage){
        age =iage;
        name ="HUHU";
        cout<<"overload with age constructor"<<endl;
    }
    Human (string iname){
        age =20;
        name ="amelly";
        cout<<"overload with iname constructor"<<endl;
    }
    void display(){
        cout<<name<< endl<<age<<endl;
    }
};
 
int main (){
    Human ali;
    ali.display();

    Human gg("GG");
    gg.display();

    Human hh(15);
    hh.display();

    return 0;
} 
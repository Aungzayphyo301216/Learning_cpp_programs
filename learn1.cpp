#include <iostream>
#include  <string>

using namespace std;

class Human {

private:
    int age;
    string name;
public: 
   Human (){
      cout<< "default constructor "<<endl;
   
   }
   Human (string iname, int iage){
      age=iage;
      name=iname;
      cout<<"overload constructor"<<endl;
   }
   void display (){
      cout<<name<<" and " <<age<<endl;
   }
};
int main (){
   Human ali;

   Human azp ("azp" , 30);
   azp.display();
   return 0;

}
#include <iostream>
#include <memory> // memory locations for share_ptr 

using namespace std; 

//=======testing===//

//class MyClass {
  //  public:
    //    MyClass(){
     //       cout<<"Constructor invoked "<<endl;
       // }
        //~MyClass(){
          //  cout<<"Deconstructor is invokde"<<endl;
        //}

//};
//===========testing======//

int main()
{
    unique_ptr<int> unPtr1 = make_unique<int>(23);
    
    // move is change owner unptr2//

    unique_ptr<int>unPtr2=move(unPtr1);
        cout << *unPtr2 <<endl;
       
    

    return 0;
}

//out will show 23 at unptr2 , no access value in unptr1
#include <iostream>

using namespace std;
void display();
int main(){
    display();
    display();
return 0;
}

void display(){
    static int counter=0;
    cout<<"The counter is"<<++counter<<"times"<<endl;
}

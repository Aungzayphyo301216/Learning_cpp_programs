#include <iostream>
using namespace std;

class alpha {
private:
    int a1;
public:
    alpha(int arg=0){
    a1=arg;}
    friend void fun();
};
class belta {
private:
    int b1;
public:
    belta(int arg=0){
        b1=arg;
    }
    friend void fun();
};

void fun(){
    alpha a(8);
    belta b(2);
    int x =a.a1+b.b1;
    cout<<"sum "<<x<<endl;
}
int main(){
    fun();
}
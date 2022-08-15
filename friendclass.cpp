#include <iostream>
using namespace std;

class alpha {
private:
    int a1;
public:
    alpha (int arg=0){
        a1=arg;
    }
    friend class belta;
};
class belta {
private:
    int b1;
public:
    belta(int arg=0){
        b1=arg;
    }
    int Sum(){
        alpha a(8);
        int sum=a.a1+b1;
        return sum;
    }
};
int main(){
    belta b(3);
    cout <<"Sum is "<<b.Sum()<<endl;
    return 0;
}
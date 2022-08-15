#include <iostream>
using namespace std;

class person {
private:
    int weight;
public:
    person (int w=0){
        weight=w;

    }
    friend bool operator >(person a ,person y);
    friend bool operator <(person a ,person y);
};
bool operator >(person a ,person y)
{
    return a.weight >y.weight;
}
bool operator<(person a ,person y)
{
    return a.weight >y.weight;
}
int main(){
    int x,y;
    cout<<  "Enter weight of Jone"<<endl;
    cin>>x;

    cout<<"Enter weight of Honey"<<endl;
    cin>>y;
    person Jone(x);
    person Honey(y);

    if (Jone>Honey)
        cout<<"Jone is greater Honey"<<endl;

    else if (Jone<Honey)
        cout<<"Honey is greater Jone"<<endl;
    
}
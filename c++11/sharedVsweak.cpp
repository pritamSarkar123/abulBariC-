#include<iostream>
#include<memory>
using namespace std;
class Base{
    public:
        int length=10;
        int breadth=10;
        Base(){cout<<"Base obj creates"<<endl;}
        ~Base(){cout<<"Base obj destroyed"<<endl;}
};

shared_ptr<Base> sharedReturn(){
    shared_ptr<Base> sp(new Base);
    return sp;
}
void checkSharedPtr(){
    cout<<"Shared pointer sequence"<<endl;
    cout<<"Enter"<<endl;
    shared_ptr<Base> p=sharedReturn();
    cout<<"Exit"<<endl;
}
void checkWeakPtr(){
    cout<<"Weak pointer sequence"<<endl;
    cout<<"Enter"<<endl;
    weak_ptr<Base> p=sharedReturn();
    cout<<"Exit"<<endl;
}

int main(){
    checkSharedPtr();
    checkWeakPtr();
    return 0;
}
#include<iostream>
using namespace std;
class Base{
    public:
        void funcOne(){
            cout<<"func One from Base Class"<<endl;
        }
        virtual void funcTwo(){
            cout<<"func Two from Base Class"<<endl;
        }
};
class Derived:public Base{
    public:
        void funcOne(){
            cout<<"func One from Derived Class"<<endl;
        }
        void funcTwo(){
            cout<<"func Two from Derived Class"<<endl;
        }
};
int main(){
    Base *p=new Derived();
    p->funcOne();
    p->funcTwo();
    delete p;
    return 0;
}
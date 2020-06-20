#include<iostream>
using namespace std;
class Base{
    public:
        //all pure virtual functions so interface
        //not a single concrete function
        // no reusibility only pure polymorphism
        virtual void funcOne()=0;
        virtual void funcTwo()=0;
};
class DerivedOne:public Base{
    public:
        void funcOne(){
            cout<<"func One from DerivedOne Class"<<endl;
        }
        void funcTwo(){
            cout<<"func Two from DerivedOne Class"<<endl;
        }
};
class DerivedTwo:public Base{
    public:
        void funcOne(){
            cout<<"func One from DerivedTwo Class"<<endl;
        }
        void funcTwo(){
            cout<<"func Two from DerivedTwo Class"<<endl;
        }
};
int main(){
    Base *p=new DerivedOne();
    p->funcOne();
    p->funcTwo();
    p=new DerivedTwo();
    p->funcOne();
    p->funcTwo();
    return 0;
}
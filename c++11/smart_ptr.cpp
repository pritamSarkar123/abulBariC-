#include<iostream>
#include<memory>
using namespace std;
class Base{
    public:
        int length=10;
        int breadth=10;
};
void uniquePointer();
void sharedPointer();
void weakPointer();
int main(){
    uniquePointer();
    sharedPointer();
    weakPointer();
    return 0;
}
void uniquePointer(){
    unique_ptr<Base> p1(new Base());
    cout<<"length : "<<p1->length<<" breadth : "<<p1->breadth<<endl;
    unique_ptr<Base> p2=move(p1);//one ptr at a time, otherwise not possible
    cout<<"length : "<<p2->length<<" breadth : "<<p2->breadth<<endl;
}
void sharedPointer(){
    shared_ptr<Base> p1(new Base());
    cout<<"length : "<<p1->length<<" breadth : "<<p1->breadth<<endl;
    shared_ptr<Base> p2=p1;
    cout<<"length : "<<p2->length<<" breadth : "<<p2->breadth<<endl;
    cout<<"number of pointers envolved : "<<p2.use_count()<<endl;
}
void weakPointer(){
    //more details remaining
    shared_ptr<Base> p(new Base());
    cout<<"ref_count before adding weak_ptr"<<p.use_count()<<endl;
    weak_ptr<Base> p1=p;
    cout<<"ref_count after adding weak_ptr"<<p.use_count()<<endl;
    cout<<"length : "<<p1.lock()->length <<" breadth : "<<p1.lock()->breadth<<endl;
    weak_ptr<Base> p2=p;
    cout<<"length : "<<p2.lock()->length<<" breadth : "<<p2.lock()->breadth<<endl;   
}
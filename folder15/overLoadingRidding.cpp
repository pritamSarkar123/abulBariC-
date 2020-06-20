#include<iostream>
using namespace std;
class Base{
	public:
	    void funcOne(){
	        cout<<"funcOne from Base class"<<endl;
	    }
	    void funcTwo(){
	        cout<<"funcTwo from Base class"<<endl;
	    }
};
class Derived:public Base{
    public:
        void funcOne(){
	        cout<<"funcOne from Derived class"<<endl;
	    }
	    void funcTwo(int x){
	        cout<<"funcTwo from Derived class"<<endl;
	    }
};
int main(){
    Derived d;
    d.funcOne();//overridding
    d.Base::funcOne();
    d.Base::funcTwo(); //d.funcTwo()<- gives error here
    d.funcTwo(5);//overloading
    return 0;
}


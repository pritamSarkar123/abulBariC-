#include<iostream>
using namespace std;
class Your; //declaration of friend class 
class My{
    private:
       int a=10;
    public:
    	friend Your;   
};
class Your{
	public:
		My m;
		int getMyVal(){
			return m.a;
		}
};
int main(){
	Your y;
	cout<<y.getMyVal()<<endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
class MyClassOne{
    public:
        string what(){
            return string("Parent class exception!");
        }
};
class MyClassTwo:public MyClassOne{
    public:
        string what(){
            return string("Child class exception!");
        }
};

int main(){
    /*
        if parent class catch block before child class catch block
        then parent class catch block also handles the thrown child class exception
        we dont want this, thats why
        1st child class catch block then parent class exception block 
    */
    int i;
    cin>>i;
    try{
        cout<<"1st child class catch block then parent class exception block"<<endl;
        if(i==0){
            throw MyClassOne();
        }
        else{
            throw MyClassTwo();
        }
    }
    catch(MyClassTwo e){//1st child class catch block
        cout<<e.what();
    }
    catch(MyClassOne e){//2nd parent class catch block
        cout<<e.what();
    }
    return 0;
}

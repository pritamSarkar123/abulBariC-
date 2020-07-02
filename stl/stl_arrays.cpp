#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,20> a{1,2,3};
    cout<<a.size()<<endl;
    a[9]=20;
    array<int,20>::iterator itr;
    for(itr=a.begin();itr!=a.end();itr++){
        cout<<*itr<<endl;
    }
    return 0;
}
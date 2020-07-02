#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> v={1,2,3,4,5};
    v.push_front(6);
    v.push_front(7);
    forward_list<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<++*itr<<endl;
    }
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}
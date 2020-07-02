#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> v={1,2,3,4,5,5};
    v.insert(6);
    v.insert(7);
    set<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    v.push_back(6);
    v.push_back(7);
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<++*itr<<endl;
    }
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}
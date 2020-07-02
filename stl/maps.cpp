#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m.insert(pair<int,string>(1,"Pritam"));
    m.insert(pair<int,string>(2,"Eshani"));
    m.insert(pair<int,string>(3,"Rahul"));
    m.insert(pair<int,string>(4,"Rishika"));
    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int,string>::iterator itr1;
    itr1=m.find(2);//key
    cout<<itr1->first<<" "<<itr1->second<<endl;

    m.erase(2);//key
    cout<<"after erasing"<<endl;
    for(itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    m.clear();
    if(m.empty()){
        cout<<"empty map"<<endl;
    }
    else{
        cout<<"not empty map"<<endl;
    }
    return 0;
}

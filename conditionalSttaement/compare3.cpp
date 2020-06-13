#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" max"<<endl;
        }
        else{
            cout<<c<<" max"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" max"<<endl;
        }
        else{
            cout<<c<<" max"<<endl;
        }
    }
    return 0;
}

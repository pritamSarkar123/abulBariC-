#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    int i=-54321;
    ostringstream str1;
    str1<<i;
    string s=str1.str();
    cout<<s<<endl;
    cout<<s[0]<<" "<<s[1]<<endl;
    return 0;
}
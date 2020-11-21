#include <iostream>
#include<vector>
using namespace std;

bool isPowerOf2(int);
int noOfOnes(int);
void powerSet(vector<char> arr,vector<char> na,int n){
    if(n>=arr.size()){
        cout<<"{";
        for(int i=0;i<na.size();i++) cout<<" "<<na[i];
        cout<<" }"<<endl;
        return;
    }
    powerSet(arr,na,n+1);
    na.push_back(arr[n]);
    powerSet(arr,na,n+1);
    na.pop_back();
}
void powerSetBit(char arr[],int n){
    // x<<n => x*(2^n)
    // n & 1<<i  => matching ith bit 0/1
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
   //n
    //in n-1 from rightmost one to right most bit all get complimented
    //eg:- 6=> 01[10] then 5=>01[01]
    //then if we do n & n-1 => right most 1 to right most bit all become 0
    //eg:- 6 & 5 => 01[00]

   cout <<isPowerOf2(8)<< endl;
   cout <<isPowerOf2(5)<< endl;
   cout <<isPowerOf2(0)<< endl;
   cout<<noOfOnes(7)<<endl;
   //-------------------------------------
   vector<char> arr{'a','b','c','d'};
   vector<char> na;
  powerSet(arr,na,0);
   //--------------------------
   char a[]={'a','b','c','d'};
   powerSetBit(a,4);
   return 0;
}
bool isPowerOf2(int n){

    // if the number is pow of two then n=> 1[00...0]
    //n-1=> 0[11...1]
    //so, n & n-1 => 0[00...0] => 0

    // if n==0 no need to check directly we can say that
    return !n || !(n & n-1);
}
int noOfOnes(int n){
    int count=0;
    while(n){
        count++;
        n=n & n-1;
    }
    return count;
}

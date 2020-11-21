#include <iostream>

using namespace std;
int findUniqueOne(int a[],int n){

    /*
    if all numbers except one repeat twice(even no of times) then find the number
    */

    int xorValue=0;
    for(int i=0;i<n;i++){
        xorValue=xorValue^a[i];
    }
    return xorValue;
}
int findUniqueTwo(int a[],int n){
    /*
    if all numbers except two repeat twice then find the two numbers
    */
    //finding xor value for entire array
    int xorValue=0;
    for(int i=0;i<n;i++){
        xorValue=xorValue^a[i];
    }
    //finding the rightmost one's position in xorValue
    int rightMostOnePosition=0;
    while(!(1<<rightMostOnePosition & xorValue)){
        rightMostOnePosition++;
    }
    //finding xor value for those array elements,
    //containing 1 at rightMostOnePosition
    int oneValue=0;
    for(int i=0;i<n;i++){
        if(a[i] & 1<<rightMostOnePosition){
            oneValue = oneValue^a[i];
        }
    }
    //finding another value
    int anotherValue=oneValue^xorValue;
    cout<<oneValue<<" "<<anotherValue<<endl;
}
int uniqueInTreeTimeRepetation(int a[],int n,int repetation){
    /*
    if all number repeats "repetation" times, excepet one, find that number
    */
    int result=0;
    for(int i=0;i<sizeof(int)*8;i++){//checking all 64 bits
        int sum=0; //sum<- no of numbers in a[] , where i th position is 1
        for(int j=0;j<n;j++){
            if((a[j] & 1<<i)!=0){//checking in n elements,whose i th bit is set
                sum++;
            }
        }
        //if for i sum%3 !=0 then setBit(result,i)
        if(sum%repetation!=0){
            result=(result | 1<<i);
        }
    }
    return result;
}
int main()
{
    int a[]={1,2,3,4,3,1,2,1,2,3,1,2,3};
   cout <<findUniqueOne(a,13)<< endl;
   int b[]={1,2,3,7,3,1,2,5};
   findUniqueTwo(b,8);
   int c[]={1,2,3,1,2,3,7};
   cout<<uniqueInTreeTimeRepetation(c,7,2)<<endl;
   return 0;
}

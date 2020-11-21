#include <iostream>

using namespace std;
void getBit();
void setBit();
void clearBit();
void updateBit(int,int);
int main()
{
   getBit();
   setBit();
   clearBit();
   updateBit(5,1);
   return 0;
}
void getBit(){
    //printing the bit at the position i
    int number=5;
    int position=1;
    if(number & 1<<position){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}
void setBit(){
    int number=5;
    int position=1;
    number =number | 1<<position;
    if(number & 1<<position){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}
void clearBit(){
    int number=5;
    int position=2;
    number = number & ~(1<<position);
    if(number & 1<<position){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}
void updateBit(int number,int position){
    //1st clear bit
    //then set
    number = number & ~(1<<position);
    number =number | 1<<position;
    if(number & 1<<position){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

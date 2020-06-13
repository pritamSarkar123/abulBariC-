#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number to check whether it is prime or not"<<endl;
	cin >> num;
	int limit=sqrt(num);
	for(int i=2;i<=limit;i++){
		if(num%i==0){
			cout<<"not a prime number"<<endl;
			return 0;
		}
	}
	cout<<"prime number"<<endl;
	return 0;
}
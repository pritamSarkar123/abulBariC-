
/*
	a number n is perfect when [2*n=sum of factors of n]
*/
#include<iostream>
using namespace std;
int main(){
	int number,sum=0;
	cout<<"Enter the number to find out whether it is perfect or not"<<endl;
	cin>>number;
	for(int i=1;i<=number;i++){
		if(number%i==0){
			sum+=i;
		}
	}
	if(sum==2*number){
		cout<<number<<" is a perfect number"<<endl;
	}
	else{
		cout<<number<<" is not a perfect number"<<endl;
	}
	return 0;
}
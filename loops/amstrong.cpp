/*
	a number is amstrong when
	[sum of cubed digits = the number]
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,numcp,sum=0;
	cout<<"Enter the number to find out Amstrong or nor"<<endl;
	cin>>num;
	numcp=num;
	while(num>0){
		int r=num%10;
		sum+=pow(r,3);
		cout<<"r "<<r<<" r^3 "<<pow(r,3)<<" sum "<<sum<<endl;
		num/=10;
	}
	if(numcp==sum)
		cout<<"Amstrong"<<endl;
	else
		cout<<"Not Amstrong"<<endl;
	return 0;
}
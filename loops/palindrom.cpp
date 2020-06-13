#include<iostream>
using namespace std;
int main(){
	int num,numcp,rev=0;
	cin>>num;
	numcp=num;
	while(num){
		int r=num%10;
		rev=rev*10+r;
		num/=10;
	}
	if(numcp==rev)
		cout<<"Palindrom"<<endl;
	else
		cout<<"Not Palindrom"<<endl;
	return 0;
}
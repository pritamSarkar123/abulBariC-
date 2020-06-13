#include<iostream>
using namespace std;
int main(){
	int year;
	cout <<"Enter the year"<<endl;
	cin>>year;
	if(year%4==0){
		if(year%100==0){ //if it is a century then must be divisible by 400
			if(year%400==0){
				cout<<"This is leap year"<<endl;
			}
			else{
				cout<<"This is not a leap year"<<endl;
			}
		}
		else{
			cout<<"This is leap year"<<endl;
		}
	}
	else{
		cout<<"This is not a leap year"<<endl;
	}
	return 0;
}
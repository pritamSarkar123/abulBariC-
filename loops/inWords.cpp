#include <iostream>
using namespace std;
int main(){
	int num,rev=0;
	cin>>num;
	while(num){
		int r=num%10;
		rev=rev*10+r;
		num/=10;
	}
	while(rev){
		int r=rev%10;
		switch(r){
			case 0:
				cout<<"zero\t";
				break;
			case 1:
				cout<<"one\t";
				break;
			case 2:
				cout<<"two\t";
				break;
			case 3:
				cout<<"three\t";
				break;
			case 4:
				cout<<"four\t";
				break;
			case 5:
				cout<<"five\t";
				break;
			case 6:
				cout<<"six\t";
				break;
			case 7:
				cout<<"seven\t";
				break;
			case 8:
				cout<<"eight\t";
				break;
			case 9:
				cout<<"nine\t";
				break;
		}
		rev/=10;
	}
	return 0;
}
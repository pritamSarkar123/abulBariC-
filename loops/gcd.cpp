#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	while(true){
		if(m>n){
			int r=m%n;
			if(r==0){
				cout<<n;
				break;
			}
			m=n;n=r;
		}
		else{
			m=m^n;
			n=m^n;
			m=m^n;
		}
	}
	return 0;
}
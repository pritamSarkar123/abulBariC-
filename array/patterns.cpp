#include<iostream>
using namespace std;
void topLeft(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i+j < n){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
void topRight(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<i){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
void bottomLeft(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<=i){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
void bottomRight(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<n-i-1){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	topLeft(n);
	topRight(n);
	bottomLeft(n);
	bottomRight(n);
	return 0;
}
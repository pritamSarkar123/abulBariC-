#include <iostream>
using namespace std;
int main(){
	int R1,R2,C1,C2;
	cout<<"Enter number of rows and column of 1st matrix:"<<endl;
	cin>>R1>>C1;
	cout<<"Enter number of rows and column of 2nd matrix:"<<endl;
	cin>>R2>>C2;
	if(C1!=R2){
		cout<<"Multiplication Not possible!"<<endl;
		return 0;
	}
	int A[R1][C1],B[R2][C2],C[R1][C2]={0};
	//making C[R1][C2]={0} will not work here leads to garbage value in fucking WINDOWS
	//do it in linux and u will get correct ans
	cout<<"Enter "<<R1*C1<<" values:"<<endl;
	for(auto &x:A){
		for(auto &y:x){
			cin>>y;
		}
	}
	cout<<"Enter "<<R2*C2<<" values:"<<endl;
	for(auto &x:B){
		for(auto &y:x){
			cin>>y;
		}
	}
	for(int i=0;i<R1;i++){
		for(int j=0;j<C2;j++){
			for(int k=0;k<C1;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	cout<<"The output "<<endl;
	for(auto &x: C){
		for(auto &y:x){
			cout<<y<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

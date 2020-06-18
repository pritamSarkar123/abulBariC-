#include<iostream>
using namespace std;
/*	Not allowed:
		int max(int a=0,int b=0, int c)
		int max(int a,int b=0, int c)
	Allowed:
		int max(int a=0,int b=0, int c=0)  
		//place defaults from left to right 
		//skip none
*/
int max(int a=0,int b=0, int c=0){
	return (a>b && a>c)?a:(b>c)?b:c;
}
int main(int argc, char const *argv[])
{
	cout<<max()<<endl;
	cout<<max(10)<<endl;
	cout<<max(10,5)<<endl;
	cout<<max(15,20,13)<<endl;
	return 0;
}
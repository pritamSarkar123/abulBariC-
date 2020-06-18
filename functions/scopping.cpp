#include<iostream>
using namespace std;
/*
	:: this scope resolution is used in a function
	where there is a same named variable as global variable
	, there to show or access and modify the global variable we use this
*/
int g=0;
void funcOne(){
	/*
		g is not declared here, so it finds the g the next nearest scope
		g is global here
	*/
	g++;
	cout<<g<<endl;
	cout<<::g<<endl;
}
void funcTwo(){
	/*
		g is defined here, g is local now
		to access global g we have to use (::) scope resolution
	*/
	int g=10;
	g++;
	cout<<g<<endl;
	cout<<::g<<endl;
}
void funcThree(){
	int g=55;
	g++;
	{
		//blocked scope, scope finish and variable finished
		int g=20;
		g++;
		cout<<g<<endl;
		cout<<::g<<endl;
	}
	cout<<g<<endl;
	::g++;
	cout<<::g<<endl;
}
int main(int argc, char const *argv[])
{
	funcOne();
	funcTwo();
	funcThree();
	return 0;
}
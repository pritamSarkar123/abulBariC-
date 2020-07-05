#include<iostream>
using namespace std;

template<class T>
class Stack{
	private:
		int size=0;
		T* stack;
		int top=-1;
	public:
		Stack(int s=0){
			size=s;
			stack = new T[size];
		}
		void push(T x);
		T pop();
		void showStack();
		void removeStack();
		~Stack(){
			delete []stack;
		}
};
template<class T>
void Stack<T>::push(T x){
	if(top==size-1){
		cout<<"stack overflown!"<<endl;
		return;
	}
	stack[++top]=x;
}
template<class T>
T Stack<T>::pop(){
	T x=NULL;
	if(top==-1){
		cout<<"stack empty!"<<endl;
		return x;
	}
	return stack[top--];
}
template<class T>
void Stack<T>::removeStack(){
	delete []stack;
}
template<class T>
void Stack<T>::showStack(){
	try{
		if(top==-1) throw -1;
		for(int i=0;i<=top;i++){
			cout<<stack[i]<<"\t";
		}
		cout<<endl;
	}
	catch(int i){
		cout<<"Stack empty!"<<endl;
	}
}
int main(){
	Stack<int> si(2);
	si.push(10);
	si.push(20);	
	si.push(30);
	si.showStack();
	cout<<si.pop()<<endl;
	cout<<si.pop()<<endl;
	cout<<si.pop()<<endl;
	si.showStack();
	si.removeStack();
	Stack<double> sd(2);
	sd.push(10.1);
	sd.push(20.6);	
	sd.push(30.2);
	sd.showStack();
	cout<<sd.pop()<<endl;
	cout<<sd.pop()<<endl;
	cout<<sd.pop()<<endl;
	sd.showStack();
	sd.removeStack();
	return 0;
}

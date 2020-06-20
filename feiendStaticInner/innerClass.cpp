#include<iostream>
using namespace std;
class Outer{
    private:
        static int private_counter;
    protected:
        static int protected_counter;
    public:
        static int public_counter;
        Outer(){
            private_counter++;
            public_counter++;
            protected_counter++;
        }
        static int get_protected_counter(){
            return protected_counter;
        }
        static int get_private_counter(){
            return private_counter;
        }
        void showInner(){
            cout<<"inner count "<<i.innerVar<<endl;
            i.show();
        }
        class Inner{
            public:
                 int innerVar=0;
                 Inner(){
                    innerVar++;
                 }
                 void show(){
                    cout<<"public_counter of outer "<<public_counter<<endl;
                    cout<<"protcted_counter of outer "<<get_protected_counter()<<endl;
                    cout<<"private_counter of outer "<<get_private_counter()<<endl;
                 }
        };
        Inner i;
};
int Outer::private_counter=0;
int Outer::protected_counter=0;
int Outer::public_counter=0;

int main(){
    Outer o;
    o.showInner();
    return 0;
}



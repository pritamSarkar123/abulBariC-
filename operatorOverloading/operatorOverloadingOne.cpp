#include<iostream>
using namespace std;
class Complex{
    private:
        int r;
        int i;
    public:
        Complex(int r,int i){
            this->r=r;
            this->i=i;
        }
        Complex():Complex(0,0){};
        // Complex operator + (Complex b); valid 1
        // Complex operator + (Complex &b); valid 2
        //Complex operator + (Complex b); valid 3
        Complex operator + (Complex &b);
        friend ostream & operator << (ostream &os,Complex &c);
};
// Complex Complex::operator + (Complex b){ valid 1
//     Complex t;
//     t.i=i+b.i;
//     t.r=r+b.r; //private members can also be accessed this way -_-
//     return t;
// }
// Complex Complex::operator + (Complex &b){ valid 2
//     Complex t;
//     t.i=i+b.i;
//     t.r=r+b.r; //private members can also be accessed this way -_-
//     return t;
// }
// Complex Complex::operator + (Complex b){ valid 3
//     Complex *t=new Complex(0,0);
//     t->i=i+b.i;
//     t->r=r+b.r; //private members can also be accessed this way -_-
//     return *t;
// }
Complex Complex::operator + (Complex &b){ // valid 4
    Complex *t=new Complex(0,0);
    t->i=i+b.i;
    t->r=r+b.r; //private members can also be accessed this way -_-
    return *t;
}

// we can also see the above 4 cases in friend function implementations

ostream & operator << (ostream &os,Complex &c){
    os<<c.r<<"+i"<<c.i<<endl;
    return os;
}
int main(){
    Complex c1(5,10),c2(10,15);
    Complex c3=c1+c2;
    cout<<c1;
    cout<<c2;
    cout<<c3;
    return 0;
}
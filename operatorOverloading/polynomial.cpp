#include<iostream>
#include<math.h>
using namespace std;
class Poly{
    private:
        int n;
        int max(int a,int b){
            if(a>b) return a;
            else return b;
        }
        class Term{
            public:
                int exp;
                int coeff;
        };
        Term *t;
    public:
        Poly(int n){
            this->n=n;
            t=new Term[this->n];
        }
        Poly operator + (Poly &p);
        int value(int x);
        friend istream & operator >> (istream &is,Poly &p);
        friend ostream & operator << (ostream &os,Poly &p);
        ~Poly(){
            delete []t;
        }
};
int Poly::value(int x){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=t[i].coeff*pow(x,t[i].exp);
    }
    return sum;
}
Poly Poly::operator+(Poly &p){
    Poly *ptr=new Poly(max(n,p.n)+1);
    int i=0,j=0,k=0;
    while(i<n && j<p.n){
        if(t[i].exp>p.t[j].exp) ptr->t[k++]=t[i++];
        else if(t[i].exp<p.t[j].exp) ptr->t[k++]=p.t[j++];
        else{
            ptr->t[k].exp=t[i].exp;
            ptr->t[k++].coeff=t[i++].coeff+p.t[j++].coeff;
        }
    }
    while(i<n) ptr->t[k++]=t[i++]; 
    while(j<p.n) ptr->t[k++]=p.t[j++]; 
    return *ptr;
}
istream & operator >> (istream &is,Poly &p){
    cout<<"Enter "<<p.n<<" values one (coeff value) by one"<<endl;
    for(int i=0;i<p.n;i++){
        is>>p.t[i].coeff>>p.t[i].exp;
    }
    return is;
}
ostream & operator << (ostream &os,Poly &p){
    cout<<p.n<<endl;
    for(int i=0;i<p.n;i++){
        os<<p.t[i].coeff<<" "<<p.t[i].exp<<endl;
    }
    return os;
}
int main(){
    Poly p1(3),p2(3);
    cin>>p1;
    cin>>p2;
    cout<<p1.value(5)<<endl;
    Poly p3=p2+p1;
    cout<<p3;
    return 0;
}
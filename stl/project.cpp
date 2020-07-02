/*
    using vector of stl class
    make a list of item (name,price & quantity)
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
class Item{
    private:
        string name;
        double price;
        int quantity;
    public:
        Item();
        Item(string n,double p,int q);
        friend ifstream & operator >> (ifstream &fis,Item &i );
        friend ofstream & operator << (ofstream &fos,Item &i);
        friend ostream & operator << (ostream &os,Item &i);
};

int main(){
    int n;
    string name;
    double price;
    int quantity;
    vector<Item *> list;
    cout<<"Enter number of emements u want together"<<endl;
    cin>>n;
    cout<<"Insert "<<n<<" elements one by one"<<endl;
    for(int i=0;i<n;i++){
        cin>>name>>price>>quantity;
        list.push_back(new Item(name,price,quantity));
    }
    vector<Item *>::iterator itr;
    //writting into file
    ofstream fos("Items.txt");
    for(itr=list.begin();itr!=list.end();itr++){
        fos<<**itr;// first * for iterator dereferencing to the pointer to Item
        //second * for dereferencing the pointer to Item to the Item 
    }
    //reading from file and printing out to console
    Item item;
    ifstream fis("Items.txt");
    for(int i=0;i<list.size();i++){
        fis>>item;
        cout<<"Item"<<i<<endl<<item<<endl;
    }
    return 0;
}
Item::Item(){
    name="";
    price=0;
    quantity=0;
}
Item::Item(string n,double p,int q){
    name=n;
    price=p;
    quantity=q;
}
ifstream & operator >> (ifstream &fis,Item &i ){
    fis>>i.name>>i.price>>i.quantity;
    return fis;
}
ofstream & operator << (ofstream &fos,Item &i){
    fos<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return fos;
}
ostream & operator << (ostream &os,Item &i){
    os<<i.name<<endl<<i.price<<endl<<i.quantity<<endl;
    return os;
}


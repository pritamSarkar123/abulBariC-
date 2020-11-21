#include <iostream>
using namespace std;
//sieve of Eratosthenes
//Problem:-https://www.youtube.com/watch?v=nDPo9hsDNvU&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=36
void findAllPrimeNumbersInRange(int n){
    int *primes=new int[n+1];
    for(int i=2;i<=n;i++) primes[i]=0;
    for(int i=2;i*i<=n;i++){
        if(primes[i]==0){
            for(int j=i*i;j<=n;j+=i){// starting from its square, then all unchecked multiples
                if(primes[j]==0) primes[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(primes[i]==0) cout<<i<<" ";
    }cout<<endl;
    delete []primes;
}
void primeFactorizationUsingSieve(int n){
    //spf<- smallest prime factor
    int *spf=new int[n+1];
    for(int i=0;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
    while(n>1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }cout<<1<<endl;
    delete []spf;
}
int main() {
    findAllPrimeNumbersInRange(50);
    primeFactorizationUsingSieve(50);
	// your code goes here
	return 0;
}

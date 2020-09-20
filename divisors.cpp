#include<iostream>
using namespace std;

void sieve(int n, int primes[]){

    for(int i=2;i<=n;i++){
        if(primes[i]==0){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=1;
            }
        }
    }
}

int divisors(int n){

    if(n==1){
        return 1;
    }

    int primes[10000]={0};
    sieve(n, primes);

    bool sqofprimes[10000]={0};
    int arrofPrimes[n];
    int j=0;
    for(int i=2;i<=n;i++){
        if(primes[i]==0){
            sqofprimes[i*i]=true;
            arrofPrimes[j++]=i;
        }
    }

    int ans=1;
    int i=0;
    while(arrofPrimes[i]*arrofPrimes[i]*arrofPrimes[i]<=n){
        int power=1;
        while(n%arrofPrimes[i]!=0){
            power++;
            n/=arrofPrimes[i];
        }
        i++;
        ans*=power;
    }

    if(primes[n]==0){
        ans*=2;
    }
    else if(sqofprimes[n]){
        ans*=3;
    }
    else{
        ans*=4;
    }

    return ans;

}

int main(){
    int n;
    cin>>n;

    cout<<divisors(n)<<endl;



    return 0;
}
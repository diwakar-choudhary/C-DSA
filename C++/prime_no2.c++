#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==0||n==1){
        return false;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
            
        }
        return true;
    }
}

int main(){
    int n;
    cin>>n;

    for(int i=10;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int cnt=0;

    if(n<=1){
        cout<<"\nNot Prime";
        return 0;
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cnt++;
            }
        }
    }

     if(cnt>2){
        cout<<"\nNot Prime";
    }else
    cout<<"\nPrime ";


   
}
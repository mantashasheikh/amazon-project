#include<iostream>
using namespace std;
int main(){
    // calculate "simple interest(SI)" from Principle(P) Rate(R) and Time(T)
    // int SI,P,R,T;
    // P=12;
    // R=3;
    // T=2;
    // SI=P*R*T;
    // cout<<SI;
    // check the number is prime or not
    int n ;
    cout<<"enter a number:";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
       if(n%i==0){
        count++;
       }
      
    }
    if(count==2){
        cout<<n<<":is prime";
    }else{
        cout<<n<<":is not prime";
    }

    }



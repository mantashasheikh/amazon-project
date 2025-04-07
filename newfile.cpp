#include<iostream>
using namespace std;
int main(){


// write a program to print reverse of a number
// int num;
// cout<<"enter a number:";
// cin>>num;
// int rev=0;

// while(num>0){
//   int digit=num%10;
//   rev=rev*10+digit;
//   num=num/10;
// }
// cout<<rev;

//  sum digit of a number
// int sum=0;
// int num=2561;
// while(num>0){
//   int digit = num%10;
//   sum += digit;
//   num /= 10;
// }
// cout<<sum;


// write factorial of a number
// int num = 5;
// int ans = 1;
// for(int i = 1 ; i<=num; i++){
//   ans = ans * i;
// }
// cout<<ans;


// check the given number is palindrome or not
// int num,rev=0,temp;
// cout<<"enter a number:";
// cin>>num;
// temp=num;
// while(num>0){
//   int digit=num%10;
//   rev=rev*10+digit;
//   num=num/10;
// }
// if(temp==rev){
//   cout<<"palindrome";
// }
// else{
//   cout<<"not a palindrome";
// }

// sum the number

int num=5, sum=0;
for(int i=1; i<=num; i++){
    sum=sum+i;
}
cout<<sum;
}

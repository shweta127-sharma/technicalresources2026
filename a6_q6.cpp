#include<iostream>
using namespace std;
int main(){
    int n,rem = 0 ;
    cout<<"Enter integer : ";
    cin>>n;
    int rev = 0;
    while(n!=0){
        rem = n%10;
        rev = rem + rev*10 ;
        n = n/10;
    }
    cout<<"Reverse = " <<rev;
    return 0;
}

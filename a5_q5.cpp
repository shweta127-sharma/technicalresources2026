#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(; num>0;){
        num=num/10;
        count++;
    }
    cout<<"Number of digits = "<<count;
    return 0;
}

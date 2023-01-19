#include<iostream>
using namespace std;
bool isprime(int num){
    int count=0;
    for(int i = 2 ; i<num ; i++){
        if (num%i==0){
            count++;
        }
    }
    //cout<<count<<"   ";
    int r = (count==0) ? 1 : 0;
    //cout<<"hi "<<" ";
    return r ;
}
int main(){
    int high , low , num , count = 0 ;
    cout<<"Higer range : ";
    cin>>high;
    cout<<"lower range : ";
    cin>>low;
    for (int j = low ; j<=high ; j++){
    int out = isprime(j);
    if (out==1){
        cout<<j<<" ";
    }      
    }
    return 0;
}

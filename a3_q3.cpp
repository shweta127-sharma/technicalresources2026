#include<iostream>
using namespace std;
int main(){
    int t , num , count = 0;
    cout<<"Enter number of tests : ";
    cin>>t;
    for (int i = 0 ; i<t ; i++){
        cout<<"Enter number to check : ";
        cin>>num ;
        for(int j = 2 ; j<num ; j++){
            if (num%j==0){
                count++;
            }
        }
        if (count == 0){
            cout<<"Prime \n";
    }
        else{
            cout<<"Non-prime \n";}
    }
    
    return 0 ;
}

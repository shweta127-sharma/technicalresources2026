#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if(marks>90){
        cout<<"Excellent";
    }
    else if(marks>80 && marks<=90){
        cout<<"Good";
    }
    else if(marks>70 && marks<=80 ){
        cout<<"fair";
    }
    else if(marks>60 && marks<=70){
        cout<<"Meet expectations";
    }
    else if(marks<=60){
        cout<<"Below par";
    }
    return 0;
}

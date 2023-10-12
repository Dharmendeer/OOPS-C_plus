#include<iostream>
using namespace std;

inline int sum(int a, int b){
    return (a+b);
}

int main(){
    cout<<"The sum of two number : "<< sum(5,9)<<endl;
    return 0;
}
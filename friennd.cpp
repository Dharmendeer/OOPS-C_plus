#include<iostream>
using namespace std;

class B;
class A{
    int money=10;
    friend void c(A,B);
};

class B{
    int money =20;
    friend void c(A, B);

};

void c(A x, B y){
    cout<<"The sum of :"<< x.money+y.money<<endl;

}

int main(){
    A obj1;
    B obj2;
    c(obj1,obj2);
    return 0;
}
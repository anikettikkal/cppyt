using namespace std;
#include<iostream>
int main(){

    int balance  = 1000;
    cout<<"balance is "<<balance<<endl;

    // int value = 100; value are changeable
    const int value = 100; // add const keyword to make value unchangeable
    // value = 200;
    cout<<"value is "<<value<<endl;

    return 0;
}
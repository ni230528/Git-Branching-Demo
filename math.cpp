#include <iostream>

using namespace std;

int add(int a , int b){
    return a+b;
}

int multiply(int a , int b){
    if(b==0) return 0;
    else return a*b;
}

int divide(int a, int b){
    if(b==0) return -1;
    else return a/b;
}

int main(){
    cout << "2+3=" << add(2,3) << endl;
    cout << "2*3=" << multiply(2,3) << endl;
}
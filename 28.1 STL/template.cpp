#include<iostream>
using namespace std;

template <typename T>
void print(T n){
    cout<<n<<endl;
}

int main(){

    print(3);
    print("gggg");


    return 0;
}
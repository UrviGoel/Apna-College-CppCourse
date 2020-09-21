#include<iostream>
#include<algorithm>
using namespace std;

bool myCompare(int a, int b){
    return a>b;
}

int main(){

    int arr[]={4,5,3,1,2};

    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    // reverse(arr,arr+5);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<binary_search(arr,arr+5,10)<<endl;

    return 0;
}
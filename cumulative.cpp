#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cumsum[n];
    cumsum[0]=arr[0];
    for(int i=1;i<n;i++){
        cumsum[i]=cumsum[i-1]+arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=cumsum[j]-cumsum[i];
        }
        maxSum=max(maxSum,sum);
    }

    cout<<maxSum<<endl;

return 0;

}
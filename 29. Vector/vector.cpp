#include <iostream>
#include<vector>
using namespace std;

int main()
{    

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }// 1 2 3

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }// 1 2 3

    for(auto element:v){
        cout<<element<<endl;
    }// 1 2 3

    v.pop_back(); // 1 2

    vector<int> v2 (3,50);
    // 50 50 50 

    swap(v,v2);
    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }

    sort(v.begin(),v.end());
    

    return 0;
}
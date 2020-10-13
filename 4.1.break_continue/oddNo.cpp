#include <iostream>
using namespace std;
 
int main() {
  
   int n;
   cout<<"Enter a number: ";
   cin>>n;
  
   for (int i=1; i<=n; i++) {
      
       if (i%2==0) {                  // i is even
           continue;
       }
       cout<<i<<endl;
   }
  
   return 0;
}

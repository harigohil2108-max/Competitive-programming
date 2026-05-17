#include <iostream>
using namespace std;
int main() {
int t;
cin >> t;
while(t>0){
 
    int n,k;
    bool found = false;
    cin >> n;
    int arr[n];
    cin>> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];}

        for(int i=0;i<n;i++){
          if(arr[i]==k){
           found = true;
            
          }
         
          
        }
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;




    t--;
}
return 0;
}
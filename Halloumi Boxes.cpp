#include <iostream>
using namespace std;
int main() {
     int t;
     cin >> t;
     while(t>0){
        int n,k;
        bool found = true;
        cin >> n>> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){ found = false;}
        }
        if(k>1){
            cout <<"YES\n";
        }
        else if( k ==1 && found == true) cout << "YES\n";
        else cout << "NO\n";    
        
        t--;
     }

return 0;
}
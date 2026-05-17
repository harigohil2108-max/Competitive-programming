#include <iostream>
using namespace std;
#include <algorithm>
int main() {
  int t;
    cin >> t;
    while(t>0){
        int n,x;
        cin >> n>> x;
        int v[n+1] = {0};
        int arr[n+1];
        arr[0] = 0;
        for(int i=1;i<=n;i++){
            cin >> arr[i];
        }
        for(int i =0;i<n;i++){
            int l;
             l =arr[i+1]-arr[i];
             v[i]= l;
        }
        v[n] = 2*(x-arr[n]);
        int ans=0;
        for(int i=0;i<=n;i++){
            ans = max(ans,v[i]);
                }
                cout << ans<< "\n";
            t--;
    }
return 0;
}
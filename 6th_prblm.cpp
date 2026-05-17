#include <iostream>
using namespace std;
int main() {

int t;
cin >> t;
while(t--){
            int n,k;
            cin >> n >> k;
                int cnt = 1;
            int ara[n];
            for(int i=0;i<n;i++){
                cin >> ara[i];
            }
    for(int i=0;i<n;i++){
               for(int j=i +1;j<n;j++){ 
                
                if(ara[i] > ara[j]){ swap(ara[i],ara[j]);
                  cnt++;   }
               }
            }
            if(cnt > k) cout << "NO" << endl;
            else cout << "YES" << endl;

  }


return 0;
}
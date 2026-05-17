#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {


    int n;
    cin >> n;
    bool found = false;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
    cin >> ar[i];
    ar[i] = abs(ar[i]);
}
    
    for(int i=0;i<n;i++){
     if(ar[i]==0){
        
        found = true;
            cout << 0 << endl;
        break;
     }
       

    }
    if(!found)
        cout << *min_element(ar.begin(), ar.end()) << endl;
}

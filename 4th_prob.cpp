#include <iostream>
using namespace std;
int main() {
int t;
cin >> t;
while(t--){
    int n,q;
    cin >> n >> q;
    int ara[n];
    int arb[n];
    
    for(int i =0;i<n;i++){
        cin >> ara[i];
    }
    

    for(int i =0;i<n;i++){
        cin >> arb[i];
    }
     for(int i =0;i<q;i++){
    int r,l,sum = 0;
    cin >> l >> r;
    for(int j = l-1;j<r;j++){
    sum += ara[j];
    
    }
   
      cout << sum << " ";
       int sum = 0;
      for(int j = l-1;j<r;j++){
    sum += arb[j];
    }
        cout << sum ;
}
return 0;
}

//gpt code
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        int ara[n], arb[n];

        for(int i = 0; i < n; i++){
            cin >> ara[i];
        }

        for(int i = 0; i < n; i++){
            cin >> arb[i];
        }

        // prefix sums
        int prefA[n+1], prefB[n+1];
        prefA[0] = prefB[0] = 0;

        for(int i = 1; i <= n; i++){
            prefA[i] = prefA[i-1] + ara[i-1];
            prefB[i] = prefB[i-1] + arb[i-1];
        }

        while(q--){
            int l, r;
            cin >> l >> r;

            int sumA = prefA[r] - prefA[l-1];
            int sumB = prefB[r] - prefB[l-1];

            cout << sumA << " " << sumB << "\n";
        }
    }

    return 0;
}
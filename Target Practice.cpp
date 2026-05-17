// #include <iostream>
// using namespace std;
// int main() {
// int t;
// cin>> t;
// while(t>0){
//     int n;
//     int sum=0;
//     cin>> n;
//     int ar[101];
//     for(int i=1; i<=100; i++){
//         cin>> ar[i];
//     }
//     for(int i=1; i<=100; i++){
//         if(i/10==1 || i/10==0 || (i>90 && i<100) && ar[i]=='X'){

//             sum+=1;
//         }
//         else if (i/10==2 || i/10==9 || (i>81 && i<90) || (i>11 && i<20) && ar[i]=='X')
//         {
//             sum+=2;
//         }
//             else if (i/10==3 || i/10==8 || (i>72 && i<79) || (i>22 && i<29) && ar[i]=='X')
//             {
//                 sum+=3;
//             }
//             else if (i/10==4 || i/10==7 || (i>63 && i<68) || (i>33 && i<38) && ar[i]=='X')
//             {
//                 sum+=4;
//             }
//             else if ( i==55 || i==56 || i==65 ||i == 66 && ar[i]=='X') 
//             {
//                 sum+=5;
//             }
        

//     }
//     cout<< sum << endl;

//     t--;

// }
// return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        char grid[10][10];
        int sum = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {

                if (grid[i][j] == 'X') {

                    sum = 1+sum + min(min(i,9-i),min(j,9-j));
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}
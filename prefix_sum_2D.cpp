/*
Given 2d array a of N*N integers. Given Q
queries and in each query given a, b, c and d
print sum of Box represented by (a,b) as
top left point and (c,d) as bottom right
point.

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cin>>arr[i][j];
        }
    }

    int Q;
    cin >> Q;
    while(Q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        long long sum = 0;
        for( int i = a-1; i < c ; i++){
            for(int j = b-1; j < d ; j++){
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
}


// #include<iostream>
// using namespace std;

// const int N= 1e3;
// int arr[N][N];
// long long pfs[N][N];

// int main(){

//     int n;
//     cin >> n;

//     for(int i=1 ; i <= n ; i++){
//         for(int j=1 ; j <= n ; j++){
//             cin >> arr[i][j];
//             pfs[i][j] = arr[i][j] + pfs[i-1][j] + pfs[i][j-1] - pfs[i-1][j-1];
//         }
//     }

//     int Q;
//     cin >> Q;
//     while(Q--){
//         int a,b,c,d;
//         cin >> a >> b >> c >> d;
//         cout<< pfs[c][d] - pfs[a-1][d] - pfs[c][b-1] + pfs[a-1][b-1]<< endl;
//     }
// }



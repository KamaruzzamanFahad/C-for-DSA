#include <bits/stdc++.h>
using namespace std;

void def(int *a, int *b){
    int sum = *a + *b;
    int diff = *a -*b;
    *a = sum;
    *b = diff;
};

int main() {
    // int t;
    // cin >> t;

    // while (t--) {
    //     int n;
    //     cin >> n;

    //     if (n % 2 != 0) {
    //         cout << -1 << endl;
    //         continue;
    //     }

    //     int even = 0, odd = 0;

    //     for (int i = 0; i < n; i++) {
    //         int temp;
    //         cin >> temp;
    //         if (temp % 2 == 0) {
    //             even++;
    //         } else {
    //             odd++;
    //         }
    //     }

    //     // Check if already balanced
    //     if (even == odd) {
    //         cout << 0 << endl;
    //     } else {
    //         // Calculate difference and output operations needed
    //         cout << abs(even - n / 2) << endl;
    //     }
    // }

    // return 0;


    // int a, b;

    // cin >> a >> b;

    // def(&a, &b);

    // cout << a << endl <<b;


    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];

    }

    reverse(arr, arr+n);


    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }


}

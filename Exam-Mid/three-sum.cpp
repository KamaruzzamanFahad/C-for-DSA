#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int loop =0; loop <n; loop++){

        int num, sum; 
        cin >> num >> sum;
        int a[num];
        for(int i=0; i<num; i++){
            cin >> a[i];
        }

        string result = "NO";
        for(int i=0; i<num; i++){
            for(int j=i+1; j<num; j++){
                for(int k=j+1; k<num; k++){
                    if(a[i] + a[j] + a[k] == sum){
                        result = "YES";
                        break;
                    }
                }
            }
        }
        cout << result << endl;
    }
    

    return 0;
}
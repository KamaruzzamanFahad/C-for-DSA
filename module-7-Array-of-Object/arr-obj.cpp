# include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rull;
    int mark;
};

int main(){
    int n;
    cin >> n;
Student arr[n];

for(int i=0; i<n; i++){
    cin >> arr[i].name >> arr[i].rull >> arr[i].mark;
}


for(int i=0; i<n; i++){
    cout << arr[i].name << " " << arr[i].rull << " " <<  arr[i].mark << endl;
}


}
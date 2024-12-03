#include <bits/stdc++.h>
using namespace std;

class School{
    public:
    string name, cls;
    char section;
    int id;
};

int main(){
    int n;
    cin >> n;
    School student[n];

    for(int i=0; i<n; i++){
        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
    } 


    for(int i=0; i<n; i++){
        cout << student[i].name << " " << student[i].cls << " " << student[n-i-1].section << " " << student[i].id << endl;
    }
}
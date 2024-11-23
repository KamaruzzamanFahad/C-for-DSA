#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int id, mark = INT_MIN;
    string name;
    char section;

    for(int i=0; i<3; i++){
        int temp_id, temp_mark;
        string temp_name;
        char temp_section;

        cin >> temp_id >> temp_name >> temp_section >> temp_mark;

        if(temp_mark > mark){
            id = temp_id;
            name = temp_name;
            section = temp_section;
            mark = temp_mark;
        }
        
    }

    cout << id << " " << name << " " << section << " " << mark << endl;
    }


}
#include<iostream>
#include<stdio.h>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
//vector<Data Type> name of vector;
// push_back(data) :push data to the vector
// size(): the size of vector or the number of element in vector

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;

    }
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it ){
        cout << *it << endl;
    }

    string s = "ngon ngu lap trinh c++";
    stringstream ss(s);
    vector<string> a;
    string tmp;
    while (ss >> tmp){
        a.push_back(tmp);
    };
    for(string x:a){
        cout << x << endl;
    }

return 0;
}
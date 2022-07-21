#include<bits/stdc++.h>
#include<string>

using namespace std;
//pair <datatype1, datatype2> a;
// make_pair(a,b)
// a.first
// a.second

//tuple<datatype1, datatype2, datatype3 >
// get<num>(t)

int main(){
    string s = "The world is so suck!";
    pair <int, int> v = make_pair(100,200);
    cout << v.first << setw(5) <<  v.second << endl;
    
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        cout << tmp << endl;
    }

    return 0;
}
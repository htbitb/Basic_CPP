#include <iostream>
#include <string>

using namespace std;

struct ConNguoi{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    float can_nang;
    float W;
};

void BMI(ConNguoi nguoi){
    nguoi.W;
    nguoi.W = nguoi.can_nang / (nguoi.chieu_cao*nguoi.chieu_cao);
    cout << nguoi.W << endl;
    if(nguoi.W <= 15) cout << "Thieu can rat nang";
    else if (15 < nguoi.W && nguoi.W < 16) cout << "thieu can nang";
    else if (16 < nguoi.W && nguoi.W < 18.5) cout << "thieu can";
    else if (18.5 < nguoi.W && nguoi.W < 25) cout << "binh thuong";
    else if (nguoi.W == 25) cout <<  "thua can";
    else if (25 < nguoi.W && nguoi.W < 30) cout << "Tien beo phi";
    else cout << "you good";
    // else if ();
}
int main(){
    ConNguoi nguoi;
    cin >> nguoi.ho_ten;
    cin >> nguoi.chieu_cao;
    cin >> nguoi.can_nang;
    cin >> nguoi.tuoi;
    

    BMI(nguoi);

    return 0;
}
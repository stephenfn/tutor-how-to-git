#include <iostream>
using namespace std;

int main (){
    int t;
    cout << "Masukan tinggi segitiga : ";cin>>t;
    for (int i = 1;i<=t;i++){
        for (int space = 1; space <= t-i;space++)
            cout << " ";
        for (int ai=1;ai<=i;ai++){
            cout << "* ";
        }
        cout << endl;
    }
}
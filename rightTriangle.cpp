#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n; //taking input
    for(int i=1; i<=n; i++){ //i represents rows
        for(int j=1; j<=i; j++){ //j represents columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
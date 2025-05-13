#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    cout << "Enter n: ";
    cin >> n; // taking input
    for(int i=1; i<=n; i++){ // i represents rows
        for(int j=1; j<=i; j++){ // j represents columns
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}

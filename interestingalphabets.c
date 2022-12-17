#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n) {
        int currCol = 1;
        char ch = 'A' + n - currRow;
        while(currCol <= currRow) {
            cout << char(ch + currCol - 1);
            currCol++;
        }
        cout << endl;
        currRow++;
    }
    
}
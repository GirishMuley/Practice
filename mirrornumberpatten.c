#include<iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n) {
        int spaces = 1;
        while(spaces <= n - currRow) {
            cout << " ";
            spaces++;
        }
        int currCol = 1;
        while(currCol <= currRow) {
            cout << currCol;
            currCol++;
        }
        cout << endl;
        currRow++;
    }
  
}


#include<iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n) {
        int currCol = n - currRow + 1;
        while(currCol >= 1) {
            cout << n - currRow + 1;
            currCol--;
        }
        cout << endl;
        currRow++;
    }
  
}


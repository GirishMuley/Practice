//reverse a number
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int temp = n, revNum = 0;
	while(temp > 0) {
		int lastDigit = temp % 10;
		temp = temp / 10;
		revNum = revNum * 10 + lastDigit;
	}

	cout << revNum;
}

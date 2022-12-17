//Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main(){

    int start, end, step;
    cin >> start >> end >> step;
    
    int currentFahrenhietValue = start;
        
    while(currentFahrenhietValue <= end){
        int celsiusValue = (int)((5.0 / 9) * (currentFahrenhietValue - 32));
        cout << currentFahrenhietValue << "\t"  << celsiusValue << endl;
        currentFahrenhietValue += step;
    }
}
#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    Complex Result(0, 0);
    int r, im;
    cout << "First num.\nReal part: ";
    cin >> r;
    cout << "Imaginary part: ";
    cin >> im;
    Complex First(r, im);
    cout << "Second num.\nReal part: ";
    cin >> r;
    cout << "Imaginary part: ";
    cin >> im;
    Complex Second(r, im);
    if (First == Second) cout << "\nNums are equal.\n";
    else cout << "\nNums are not equal.\n";
    Result = First + Second;
    cout << "\nAdd:\n";
    cout << Result;
    Result.reset();
    Result = First - Second;
    cout << "\nSubtract:\n";
    cout << Result;
    Result.reset();
    Result = First * Second;
    cout << "\nMultiply:\n";
    cout << Result;
    Result.reset();
    Result = First / Second;
    cout << "\nDivide:\n";
    cout << Result;
    Result.reset();
    First.~Complex();
    Second.~Complex();
    Result.~Complex();
}
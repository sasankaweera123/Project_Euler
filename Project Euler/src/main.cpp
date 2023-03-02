#include <iostream>
#include "Q1/Q1.h"
#include "Q2/Q2.h"
#include "Q3/Q3.h"
#include "Q4/Q4.h"
#include "Q5/Q5.h"
#include "Q6/Q6.h"
#include "Q7/Q7.h"
#include "Q8/Q8.h"
#include "Q9/Q9.h"
using namespace std;

int main() {
    int input;
    cout <<"Enter Question Number = " << endl;
    cin >> input;
    switch (input) {
    case 1:
        cout<<sum();
        break;
    case 2:
        cout<<fibonacci();
        break;
    case 3:
       cout<< maxPrime();
        break;
    case 4:
        cout<<largestPalindrome();
        break;
    case 5:
        cout<<maxNumber();
        break;
    case 6:
        cout << square();
        break;
    case 7:
        cout << prime();
        break;
    case 8:
        cout << product();
        break;
    case 9:
        cout << pythagorean();
        break;
    default:
        cout << "Error";
    }
    return 0;
}
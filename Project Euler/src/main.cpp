#include <iostream>
#include "..\src\Q1\Q1.h"
#include "..\src\Q2\Q2.h"
#include "..\src\Q3\Q3.h"
#include "..\src\Q4\Q4.h"
#include "..\src\Q5\Q5.h"
#include "..\src\Q6\Q6.h"
#include "..\src\Q7\Q7.h"
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
    default:
        cout << "Error";
    }
    return 0;
}
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n; // rev =  reversed number of the input integer
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int largestPalindrome() {
    int largest = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > largest) {
                largest = product;
            }
        }
    }
    return largest;
}

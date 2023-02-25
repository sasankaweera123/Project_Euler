#include <iostream>
#include <cmath>
using namespace std;

int maxPrime() {
    long long n = 600851475143;
    int maxPrimeNumber = 1;


    while (n % 2 == 0) {
        maxPrimeNumber = 2;
        n /= 2;
    }

    
        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                maxPrimeNumber = i;
                n /= i;
            }
        }

    if (n > 2) {
        maxPrimeNumber = int(n);
    }


    return maxPrimeNumber;
}

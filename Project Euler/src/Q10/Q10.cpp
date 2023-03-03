#include <iostream>
#include <cmath>

using namespace std;

bool isPrimee(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long primeSum()
{
    long long sum = 0;
    for (int i = 2; i <= 2000000; i++) {
        if (isPrimee(i)) {
            sum += i;
        }
    }

    return sum;
}
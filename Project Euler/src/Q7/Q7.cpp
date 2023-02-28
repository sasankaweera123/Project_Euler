#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num == 2 || num == 3) return true;
    if (num == 1 || num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime() {
    int count = 1; 
    int num = 3;
    while (count < 10001) {
        if (isPrime(num)) {
            count++;
        }
        num += 2; 
    }
    return num - 2;
}

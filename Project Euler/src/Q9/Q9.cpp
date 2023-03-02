#include <iostream>

using namespace std;

int pythagorean() {
    int a, b, c, t;
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                t = a * b * c ;
                break;
            }
        }
    }
    return t;
}

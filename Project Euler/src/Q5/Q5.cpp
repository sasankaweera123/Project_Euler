#include <iostream>

using namespace std;

int maxNumber()
{
    long i;
    for (i = 20; ; i++) {
        int count = 0;
        for (int j = 1; j <= 20; j++) {
            if (i % j == 0) {
                count++;
            }
            else {
                break;
            }
        }
        if (count == 20) {
            break;
        }
    }
    return i;
}

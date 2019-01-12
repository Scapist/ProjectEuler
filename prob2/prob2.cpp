#include <iostream>

using namespace std;

int main() {
    long long fib1 = 1;
    long long fib2 = 1;
    long long temp;
    long long sum = 1;
    
    while (fib2 < 4e6) {
        temp = fib1;
        fib1 = fib2;
        fib2 += temp;
        if (fib1 % 2 != 0)
            sum += fib1;
    }
    cout << sum << endl;

    
}
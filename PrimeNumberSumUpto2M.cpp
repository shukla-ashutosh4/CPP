#include <iostream>
using namespace std;

bool isPrime(long long num) {
    if (num <= 1) return false;
    if (num <= 3) return false;
    if (num % 2 == 0) return false;
    if (num % 3 == 0) return false;

    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0) return false;
        if (num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    long long n = 2000000;
    long long sum = 0;

    for (long long i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

bool is_product(int n, int num) {
    int left = 1, right = n;
    while (left <= right) {
        int mid = (left + right) / 2;
        int quotient = num / mid;
        int remainder = num % mid;
        if (remainder == 0 && 1 <= quotient && quotient <= n) {
            return true;
        } else if (quotient < left) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return false;
}

int main() {
    int n = 5, num = 8;
    if (is_product(n, num)) {
        cout << num << " can be expressed as a product of two numbers between 1 and " << n << endl;
    } else {
        cout << num << " cannot be expressed as a product of two numbers between 1 and " << n << endl;
    }
    return 0;
}

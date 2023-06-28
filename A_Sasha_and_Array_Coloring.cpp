#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int i = 0;
        int j = n - 1;
        int ans = 0;

        while (i <= j) {
            ans += (a[j] - a[i]);
            i++;
            j--;
        }

        cout << ans << endl;
    }

    return 0;
}

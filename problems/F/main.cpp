

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        long long n;
        cin >> n;
     
        for (int i = 3; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cout << i;
                return 0;
            }
        }
        if (n % 2 == 0 && n > 4) {
            cout << n / 2;
            return 0;
        }
        cout << n;
    }
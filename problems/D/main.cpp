#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    long long height, armSpan,
            pointPerMatch, rebounds, gear;

    int minHeight = 190, maxHeight = 220,
            minArmSpan = 200, maxArmSpan = 250,
            minPointPerMatch = 10, maxPointPerMatch = 20,
            minRebounds = 2, maxRebounds = 6,
            minGear = 3, maxGear = 7;

    for (int i = 1; i <= n; i++) {
        cin >> height >> armSpan
            >> pointPerMatch >> rebounds >> gear;

        int aboveNormal = 0, aboveTheMiddle = 0, expected = 0;
        if (height > maxHeight) aboveNormal++;
        if (armSpan > maxArmSpan) aboveNormal++;
        if (pointPerMatch > maxPointPerMatch) aboveNormal++;
        if (rebounds > maxRebounds) aboveNormal++;
        if (gear > maxGear) aboveNormal++;

        if (aboveNormal >= 3 && (height > maxHeight || armSpan > maxArmSpan)) {
            cout << 0 << endl;
            continue;
        }

        if (height >= (maxHeight + minHeight) / 2) aboveTheMiddle++;
        if (armSpan >= (maxArmSpan + minArmSpan) / 2) aboveTheMiddle++;
        if (pointPerMatch >= (maxPointPerMatch + minPointPerMatch) / 2) aboveTheMiddle++;
        if (rebounds >= (maxRebounds + minRebounds) / 2) aboveTheMiddle++;
        if (gear >= (maxGear + minGear) / 2) aboveTheMiddle++;

        if (height >= minHeight) expected++;
        if (armSpan >= minArmSpan) expected++;
        if (pointPerMatch >= minPointPerMatch) expected++;
        if (rebounds >= minRebounds) expected++;
        if (gear >= minGear) expected++;

        if ((aboveNormal >= 2 && aboveTheMiddle > 2) || (expected == 5 && aboveTheMiddle >= 3)) {
            cout << 1 << endl;
            continue;
        }

        if ((aboveNormal >= 1 && aboveTheMiddle > 1) || aboveTheMiddle >= 3) {
            cout << 2 << endl;
            continue;
        }
        cout << 3 << endl;
    }
}


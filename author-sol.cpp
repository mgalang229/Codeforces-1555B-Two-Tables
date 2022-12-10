#include <bits/stdc++.h>
using namespace std;

void PerformTest() {
    int w_room, h_room;
    cin >> w_room >> h_room;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int w_second, h_second;
    cin >> w_second >> h_second;
    int ans = INT_MAX;
    if (w_second + (x2 - x1) <= w_room) {
        ans = min(ans, max(0, w_second - x1));
        ans = min(ans, max(0, x2 - (w_room - w_second)));
    }
    if (h_second + (y2 - y1) <= h_room) {
        ans = min(ans, max(0, h_second - y1));
        ans = min(ans, max(0, y2 - (h_room - h_second)));
    }
    if (ans == INT_MAX) {
        cout << -1;
    } else {
        cout << fixed << setprecision(9) << double(ans);
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        PerformTest();
    }
    return 0;
}

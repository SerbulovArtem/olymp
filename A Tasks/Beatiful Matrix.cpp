#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    array<array<int, 5>, 5> matrix{};

    int ai, aj;
    int ans = 0;
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                ai = i;
                aj = j;
                goto exit;
            }
        }
    }
    exit:

    for (int i = 0; i < 4; ++i){
        if (ai < 2) {
            ans++;
            ai++;
        }
        else if (ai > 2){
            ans++;
            ai--;
        }
        else if (aj < 2){
            ans++;
            aj++;
        }
        else if (aj > 2){
            ans++;
            aj--;
        }
    }

    cout << ans << '\n';
}

signed main() {
    solve();
    return 0;
}



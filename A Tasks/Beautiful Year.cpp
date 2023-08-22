#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <ranges>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    string y;
    cin >> y;

    string temp{};

    int num = stoi(y) + 1;
    y = to_string(num);
    bool flag = true;
    while (flag) {
        for (int i = 0; i < y.length(); i++) {
            if (find(temp.begin(), temp.end(), y[i]) == temp.end()) {
                temp.push_back(y[i]);
            }
        }
        if (temp == y){
            flag = false;
            break;
        }
        num = stoi(y) + 1;
        y = to_string(num);
        temp = "";
    }
    cout << y;
}

signed main() {
    solve();
    return 0;
}

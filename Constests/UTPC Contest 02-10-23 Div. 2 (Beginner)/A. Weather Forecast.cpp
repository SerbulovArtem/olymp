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
    int j;
    cin >> j;
    int temp = j, digit, result = j;
    for (int i = 0; i < 6; ++i){
        while(temp > 0){
            digit = temp % 10;
            temp /= 10;
            j += digit;
        }
        temp = j;
        result += temp;
        std::cout << j << ' ' << result << '\n';
    }

    //std::cout << result << '\n';
}

signed main() {
    solve();
    return 0;
}

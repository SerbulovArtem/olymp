#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve(){
    int k, n;
    cin >> k >> n;
    int magic_num = 1, temp = 1;
    for(int i = 0; i < k; i++){
        cout << magic_num << " ";
        if(magic_num + temp + k - i - 2 > n){
            magic_num += 1;
        } else{
            magic_num += temp;
            temp++;
        }
    }
    cout << "\n";
}

signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
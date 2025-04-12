#include <iostream>
#include <string>
using namespace std;
int cnt = 0;
int n1, n2;
void dfs(string num_str) {
    if (!num_str.empty()) {
        long long num = stoll(num_str);
        if (num > n2) return;
        if (num >= n1) cnt++;
    }
    dfs(num_str + '4');
    dfs(num_str + '7');
}
int main() {
    cin >> n1 >> n2;
    dfs("");
    cout << cnt << endl;
    return 0;
}

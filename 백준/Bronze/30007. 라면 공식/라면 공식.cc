#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int a, b, x;
        cin >> a >> b >> x;
        int result = ((x-1)*a)+b;
        cout << result << endl;
    }
    
    
    return 0;
}

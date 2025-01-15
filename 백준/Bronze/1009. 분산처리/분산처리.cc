#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    while(a--){
        long long n ,m;
        cin >> n >> m;
        int result = 1;
        for(int i = 0; i<m; i++){
            result = (result * n)%10;
        }
        if(result == 0){
            cout << 10 << endl;
        }else{
            cout << result << endl;
        }
    }
    return 0;
}

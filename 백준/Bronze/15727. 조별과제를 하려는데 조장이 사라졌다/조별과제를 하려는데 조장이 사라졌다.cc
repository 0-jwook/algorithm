#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    int cnt;
    cin >> a;
    cnt = a/5;
    if(a%5 < 5&& 0<a%5){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

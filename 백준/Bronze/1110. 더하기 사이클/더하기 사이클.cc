#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    int original =  a;
    int cnt = 0;
    
    do{
        int ten = a/10;
        int one = a%10;
        a = one*10 + ((ten+one)%10);
        cnt++;
    }while(a != original);
    cout << cnt <<endl;
    	
    return 0;
}

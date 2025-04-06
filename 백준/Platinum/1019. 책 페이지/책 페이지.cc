#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>

using namespace std;


int main() {
    long long n;
    cin >> n;
    
    long long result[10] = {0};
    long long position = 1;
    
    while (n/position>0) {
        long long higher = n/(position *10);
        long long current = (n/position) %10;
        long long lower = n % position;
        
        for(int i = 0; i<10; i++){
            if(i<current)
                result[i] += (higher + 1) * position;
            else if (i == current)
                result[i] += higher * position + (lower + 1);
            else
                result[i] += higher * position;
        }
        
        result[0] -= position;
        position *= 10;
    }
    
    for(int i = 0; i<10; i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
  long long int n;
  int arr[10] ={0,};
  cin >> n;
  while(n > 0){
    arr[n%10]++;
    n/=10;
  }
  arr[6]+=arr[9];
  arr[9] = 0;
  arr[6] = ++arr[6]/2;
  cout << *max_element(arr, arr+10);
  return 0;
}

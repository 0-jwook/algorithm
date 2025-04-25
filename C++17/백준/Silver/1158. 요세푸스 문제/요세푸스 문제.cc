#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
  int n;
  int m;
  queue<int> q;
  cin >> n >> m;
  for(int i = 1 ;i<=n;i++){
    q.push(i);
  }
  cout << "<";
  int i = 1;
  while (n-1) {
    if (i % m != 0) {
      q.push(q.front());
      q.pop();
    }else{
      cout << q.front() << ", ";
      q.pop();
      n--;
    }
    i++;
  }
  cout << q.front() << ">"<< endl;
  return 0;
}

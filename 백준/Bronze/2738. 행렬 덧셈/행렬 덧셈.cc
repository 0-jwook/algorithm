#include <iostream>

using namespace std;

int main() {
    int n ,m;
    cin >> n >> m;
    int arr1[n][m];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin >> arr1[i][j];
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int c = 0;
            cin >> c;
            arr1[i][j]+=c;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

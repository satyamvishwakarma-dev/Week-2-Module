#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;
    
    vector<int> rollNumbers(N);
    for (int i = 0; i < N; i++) {
        cin >> rollNumbers[i];
    }
    
    int X;
    cin >> X;
    
    int foundIndex = -1;
    for (int i = 0; i < N; i++) {
        if (rollNumbers[i] == X) {
            foundIndex = i;
            break; // Stop at the first occurrence
        }
    }
    
    if (foundIndex != -1) {
        cout << "Found at index " << foundIndex << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
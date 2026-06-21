#include <iostream>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    int rollNumbers[1000]; 
    for (int i = 0; i < N; i++) {
        cin >> rollNumbers[i];
    }
    
    int X;
    cin >> X;
    
    int foundIndex = -1;
    for (int i = 0; i < N; i++) {
        if (rollNumbers[i] == X) {
            foundIndex = i;
            break; // Stop when found
        }
    }
    
    if (foundIndex != -1) {
        cout << "Found at index " << foundIndex << endl;
    } else {
        cout << "Not Found" << endl;
    }
    
    return 0;
}
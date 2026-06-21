// #include <iostream>

// using namespace std;

// int main() {
//     int N;
//     if (!(cin >> N)) return 0;

//     int rollNumbers[1000]; 
//     for (int i = 0; i < N; i++) {
//         cin >> rollNumbers[i];
//     }
    
//     int X;
//     cin >> X;
    
//     int foundIndex = -1;
//     for (int i = 0; i < N; i++) {
//         if (rollNumbers[i] == X) {
//             foundIndex = i;
//             break; // Stop when found
//         }
//     }
    
//     if (foundIndex != -1) {
//         cout << "Found at index " << foundIndex << endl;
//     } else {
//         cout << "Not Found" << endl;
//     }
    
//     return 0;
// }

//------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
    int N;
    if (!(cin >> N)) return 0;

    int* products = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> products[i];
    }
    
    int target;
    cin >> target;
    
    int low = 0, high = N - 1;
    bool found = false;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (products[mid] == target) {
            found = true;
            break;
        } else if (products[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found) {
        cout << "Product Available" << endl;
    } else {
        cout << "Product Not Available" << endl;
    }
    
    delete[] products;
    return 0;
}
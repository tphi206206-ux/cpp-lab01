#include <iostream>
using namespace std;

int main() {
    // Mang 5 phan tu
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Cac phan tu trong mang la: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

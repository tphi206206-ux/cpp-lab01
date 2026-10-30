#include <iostream>
using namespace std;

double cong(double a, double b) { return a + b; }
double tru(double a, double b) { return a - b; }
double nhan(double a, double b) { return a * b; }
double chia(double a, double b) {
    if (b == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double a, b;
    cout << "=== MAY TINH BO TUI ===" << endl;
    cout << "1. Cong\n2. Tru\n3. Nhan\n4. Chia" << endl;
    cout << "Chon phep toan (1-4): ";
    cin >> choice;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    switch(choice) {
        case 1: cout << "Ket qua: " << cong(a, b) << endl; break;
        case 2: cout << "Ket qua: " << tru(a, b) << endl; break;
        case 3: cout << "Ket qua: " << nhan(a, b) << endl; break;
        case 4: cout << "Ket qua: " << chia(a, b) << endl; break;
        default: cout << "Lua chon khong hop le!" << endl;
    }
    return 0;
}

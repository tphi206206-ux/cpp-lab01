#include <iostream>
using namespace std;

int main() {
    double dai, rong;
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
    
    double chuVi = (dai + rong) * 2;
    double dienTich = dai * rong;
    
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
    
    return 0;
}

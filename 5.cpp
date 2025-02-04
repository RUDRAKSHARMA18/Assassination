#include<iostream>
using namespace std;

void rotate(int a[][10], int b) {
    for (int c = 0; c < b; c++) {
        for (int d = c; d < b; d++) {
            swap(a[c][d], a[d][c]);
        }
    }
    for (int c = 0; c < b; c++) {
        for (int d = 0, e = b - 1; d < e; d++, e--) {
            swap(a[d][c], a[e][c]);
        }
    }
}

int main() {
    int a, b[10][10];
    cout << "Enter size: ";
    cin >> a;
    if (a <= 0 || a > 10) { cout << "Invalid size!"; return 0; }
    cout << "Enter elements:\n";
    for (int c = 0; c < a; c++) for (int d = 0; d < a; d++) cin >> b[c][d];
    rotate(b, a);
    cout << "Rotated Matrix:\n";
    for (int c = 0; c < a; c++) {
        for (int d = 0; d < a; d++) cout << b[c][d] << " ";
        cout << "\n";
    }
    return 0;
}
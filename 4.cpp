#include<iostream>
using namespace std;

void spiral(int a) {
    int b[a][a] , c = 1 , d = 0 , e = a - 1 , f = 0 , g = a - 1;
    while (c <= a * a) {
        for (int h = d; h <= e; h++)  b[f][h] = c++;
        f++;
        for (int h = f; h <= g; h++)  b[h][e] = c++;
        e--;
        for (int h = e; h >= d; h--)  b[g][h] = c++;
        g--;
        for (int h = g; h >= f; h--)  b[h][d] = c++;
        d++;
    }
    for (int h = 0; h < a; h++) {
        for (int i = 0; i < a; i++) cout << b[h][i] << " ";
        cout << "\n";
    }
}

int main() {
    int a;
    cout << "Enter size: ";
    cin >> a;
    if (a <= 0) { cout << "Invalid size!"; return 0; }
    spiral(a);
    return 0;
}
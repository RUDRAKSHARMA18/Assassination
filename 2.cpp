#include<iostream>
using namespace std;

void reverseArray(int a[], int b)  {
    for(int c = 0; c < b / 2; c++) {
        int d = a[c];  
        a[c] = a[b - c - 1];  
        a[b - c - 1] = d;
    }
}

void secondLargestSmallest(int a[], int b) {
    if (b < 2) { 
        cout << "Not enough elements!\n";
        return;
    }
    int big = a[0], sBig = -1e9, small = a[0], sSmall = 1e9;
    for (int c = 1; c < b; c++) {
        if (a[c] > big) { sBig = big; big = a[c]; }
        else if (a[c] > sBig && a[c] != big) sBig = a[c];
        if (a[c] < small) { sSmall = small; small = a[c]; }
        else if (a[c] < sSmall && a[c] != small) sSmall = a[c];
    }
    cout << "Second Largest: " << sBig << "\nSecond Smallest: " << sSmall << "\n";
}

int main() {
    int num;  
    cout << "Enter size of array: ";
    cin >> num;
    if (num <= 0) { 
        cout << "Invalid size!";
        return 0; 
    }
    int a[num];
    cout << "Enter " << num << " elements: ";
    for (int b = 0; b < num; b++) cin >> a[b];
    reverseArray(a, num);
    cout << "Reversed Array: ";
    for (int b = 0; b < num; b++) cout << a[b] << " ";
    cout << "\n";
    secondLargestSmallest(a, num);
    return 0;
}

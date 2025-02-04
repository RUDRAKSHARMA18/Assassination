#include<iostream>
using namespace std;

bool isPrime(int a) {  
   if (a < 2) return false;
   for(int b = 2; b * b <= a; b++)  {
      if(a % b == 0) return false;  
   } 
   return true;
}

void factors(int a) {
   cout << "Factors: ";
   for (int b = 1; b <= a; b++)   {
      if (a % b == 0)  cout << b << " ";
   }
   cout << "\n";
}

int nextPrime(int a) {
   do { a++; } while (!isPrime(a));  
   return a;
}

int main() {
   int num;  
   cout << "Enter a positive integer: "; 
   cin >> num;
   if (num <= 0)  {
      cout << "Invalid Input! Enter Positive Num.";
      return 0;  
   }
   if (isPrime(num))  {
      cout << num << " is Prime\n"; 
      cout << "Next Prime: " << nextPrime(num) << "\n";
   } 
   else {
      cout << num << " is Not Prime\n"; 
      factors(num);
   }
   return 0;
}

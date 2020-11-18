#include <iostream>
using namespace std; 

//Hàm tìm x^n
double Pow(double x, int n) { 
    double pow = 1;
    for(int i = 0; i < n; i++) {
        pow = pow*x; 
    }
    return pow; 
}

//Hàm tìm lũy thừa 
int Factorial(int n) {
    if (n == 1)
        return 1;
    return n * Factorial(n - 1);
}

//Hàm tìm số Fibbonacc tại t
int Fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    cout << "4 mu 2 = " << Pow(4 , 2) << endl;
    cout << "Giai thua cua 5 = " << Factorial(5) << endl;
    cout << "So fibonacci thu 6 = " << Fibonacci(6) << endl;
}
#include <iostream> 
#include <string>
using namespace std; 

void Print(const int *A, int N) { 
    for(int i = 0; i < N; i++) {
        cout << "A[" << i << "]: " << A[i] << endl;
    }
}
int Sum(const int *A, int N) {
    int sum = 0; 
    for(int i = 0; i < N; i++) {
        sum += A[i];
    }
    return sum;
}
double Average(const int *A, int N) { 
    double sum = Sum(A, N);
    double average = sum/N;
    return average;
}
double number(const char *str) {
    double number = stod(str);
    return number;
}

int main() {
    const int A[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    const char str[10] = "12.345";
    Print(A, 10);
    cout << "Sum of A: " << Sum(A, 10) << endl; 
    cout << "Average of A: " << Average(A, 10) << endl; 
    cout << "Convert string to double c++: " << number(str) << endl;
    return 0;
}
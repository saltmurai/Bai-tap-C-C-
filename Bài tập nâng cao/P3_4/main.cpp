#include <iostream>

using namespace std; 

int Fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int *FS(int N) {
    int *FS; 
    FS = new int[N];
    for(int i = 0; i < N; i++) {
        FS[i] = Fibonacci(i);
    }
    return FS;
}


int main() {
    int *A = FS(5);
    for (int i = 0; i < 5 ; i ++) {
        cout << "A[" << i << "]: " << A[i]<< endl;
    }
}
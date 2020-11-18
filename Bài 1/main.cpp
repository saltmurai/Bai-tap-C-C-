#include<iostream> 
using namespace std;

void nhap(double *A, int N) {
    for(int i = 0; i < N; i ++) {
        cout << "\nPhan tu thu [" << i << "]: "; 
        cin >> A[i];
    }
}
void swap(double& a, double& b) {
    double temp = a; a = b; b = temp;
}

double *sap_xep(int N, double *A) {
        int i,j;
        double temp, *p = A;
        for(i=0;i < N;i++) {
            for(j= i + 1;j < N;j++) {
                if(*(p + i) > *(p+j)) {
                    swap(*(p + i), *(p + j));
                }
        
            }
        }
        return p;

    }
void in_mang(int N, double *A) {
    for(int i = 0; i < N; i++) {
        cout << "\nPhan tu thu " << i << " :" << A[i];
    }
}

int main(){
    int N;
    double A[100]; 
    cout << "Enter number of element: " << endl;
    cin >> N; 
    nhap(A, N);
    sap_xep(N, A);
    cout << "\n\nMang sau khi sap xep: " << endl;
    in_mang(N, A);
    return 0;
}
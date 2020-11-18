#include<iostream>
#include<math.h>
using namespace std;

double Polynorm(const double* a, int n, double x){
	double polynorm = 0;
	for(int i = 0; i <= n; i++){
			polynorm += *(a+i) * pow(x, n-i);
	}
	return polynorm;
}

int main(){
	int n;
	double x;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	double *A = new double[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	cout <<"Enter x = ";
	cin >> x;
	for(int i = 0; i < n; i++){
		cout <<*(A+i) << "x^" << n-1-i;
		if(i != n-1)
			cout << " + ";
	}
	cout <<" = " << Polynorm(A,n-1,x);
	return 0;
}

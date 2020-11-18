#include <iostream> 
using namespace std;

void Temperature(double c, double* k, double* f) {
    *k = c + 273;
	*f = 9*c/5 + 32;
}

int main() {
    double c, k, f; 
    cout << "Nhap do C muon chuyen doi: " ;
    cin >> c; 
    Temperature(c, &k, &f);
    cout << "Doi sang do K: " << k << endl;
    cout << "Doi sang do F: " << f << endl;
    return 0;
}
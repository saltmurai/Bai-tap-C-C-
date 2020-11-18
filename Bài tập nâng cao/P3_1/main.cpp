#include<iostream>
using namespace std;

int* fb(int n){
	int* fb = new int[n];
	int a1 = 1, a2 = 2, tmp = 0, count = 2;
	if(n == 1)
		*fb = 1;
	if(n > 1){
		*fb = 1;
		*(fb+1) = 2;
		while(count != n){
			tmp = a1 + a2;
			a1 = a2;
			a2 = tmp;
			*(fb + count++) = tmp; 
		}
	}
	return fb;
}

int main(){
	int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Day so FB " << n << " phan tu dau la: " << endl;
    int* fb = fb(n);
	for(int i = 0; i < n ; i++)
		cout << *(fb + i) <<" ";
	return 0;
}

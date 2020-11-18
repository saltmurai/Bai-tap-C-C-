#include<iostream>
using namespace std;

int* Clone(const int* a){
	int n = 0;
	while(*(a+n) != 0)
		n++;
	int* s = new int[n];
	for(int i = 0; i < n; i++){
		s[i] = a[i];
	}
	return s;
}

int main(){
    int a[] = {1,3,5,7,9,26,24,37,64, 24};
    int* b = Clone(a); 
    int n = sizeof(a)/sizeof(int);
    cout << "Mang a ban dau: " << endl;
    for(int i = 0; i < n; i++)
    	cout << *(a+i) <<" ";
    cout << "\nClone sang mang b: " << endl;
    for(int i = 0; i < n; i++)
    	cout << *(b+i) <<" ";
    return 0;
}
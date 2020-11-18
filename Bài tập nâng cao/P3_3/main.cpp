#include<iostream>
#include<string.h>
using namespace std;

char* ToUpper(const char* s){
	int n = strlen(s);
    char* a = new char[n];
	for(int i = 0; i < n; i++){
		a[i] = s[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
    a[n] = '\0';
	return a;
}

int main(){
	const char* s = "pham quang sang";
	cout << ToUpper(s); 
	return 0;
}

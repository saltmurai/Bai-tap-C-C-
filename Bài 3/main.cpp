#include <iostream> 
using namespace std;

void nhap(int N, int *mangA) { 
    for(int i = 0; i < N; i++) {
        cout << "Enter [" << i  << "] element: " ; 
        cin >> mangA[i];
    }
}
void swap(int &a, int &b) {
    int temp = a; a = b; b = temp;
}
int *sapxep(int N, int *mangA) {
    int i,j;
    int *pA = mangA; 
    for(i = 0; i < N; i++) {
        for (j = i + 1; j < N ; j++) {
            if(*(pA +i) < *(pA + j)) {
                swap(*(pA + i), *(pA + j));
            }
        }
    }
    return pA; 
}
void printArray(int N, int *mangA) {
    for(int i = 0; i < N; i++) { 
        cout << "A[" << i << "]: " << mangA[i] << endl;
    }
}
int **tansuat(int N, int *mangA) {
    int**TS = new int*[2];
	for(int i = 0; i < 2; i++){
		*(TS + i) = new int[N];
	}
	sapxep(N, mangA);

	for(int i = 0; i < N; i++){
		*(*TS+i) = *(mangA+i);
		*(*(TS + 1) + i) = 1;
	}
	int f = 1; 
	for(int i = 0 ; i < N; i++){
		f = 1;
		if(*(*TS + i) != 0){
			for(int j = i+1; j < N; j++){
				if(*(*TS + i) == *(*TS + j)){
					*(*TS + j) = 0;
					f++;
					*(*(TS + 1) + i) = f; 
				}
			}
		}
	}
	return TS;
}

int main() {
    int N;
    int *A; 
    cout << "Enter number of elements: ";
    cin >> N;
    A = new int[N];
    nhap(N, A);
    sapxep(N, A);
    cout << "Mang sau khi sap xep: " << endl;
    printArray(N, A);
    int **TS; 
    TS = tansuat(N, A);
    for(int i = 0; i < N; i++){
		if(TS[0][i] != 0)
		    cout << "So " << TS[0][i] << " xuat hien " << TS[1][i] <<  " lan" << endl;
	}
    return 0;

}
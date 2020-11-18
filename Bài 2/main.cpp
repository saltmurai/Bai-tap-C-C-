#include<iostream> 
#include<string>
using namespace std; 

class Student { 
    public: 
        string name; 
        float score;
    Student(){
        name = "no name";
        score = 0;
    }
    Student (string aName, float aScore) {
        name = aName; 
        score = aScore;
    }
    bool doET1(){
        if(score >= 26.8) {
            return true;
        }
        return false; 
    }
    void print(){
        cout << "Student name: " << name << endl;
        cout << "Score: " << score << endl;
    }
    void input(string aName, float aScore){
        name = aName;
        score = aScore;
    }

};
// Hàm hoán đổi 2 biến cấu trúc
void swap(Student& A, Student& B) {
    Student temp = A; A = B; B = temp;
}

// Hàm sắp xếp 2 biến cấu trúc
Student *sapxep(int N, Student *A) {
    int i,j;
    Student *p = A;
    float *pScore = &A->score;
    for(i=0;i < N;i++) {
            for(j= i + 1;j < N;j++) {
                if(*(pScore + i) > *(pScore+j)) {
                    swap(*(p + i), *(p + j));
                }
        
            }
        }
        return p;
}
//Hàm in mảng
void printStudentList(int N, Student *A) {
    for(int i = 0; i < N; i++) {
        cout << "\nNo. " << i + 1 << endl; 
        A[i].print();
    }
}
//Hàm nhập dữ liệu cho mảng học sinh
void inputStudentData(int N, Student *A) {
    string name;
    char *c; //
    float score = 0;
    for (int i = 0; i < N; i ++) {
        cout << "+) Enter data for student no. " << i+1 <<endl;
        cout << "   - Enter name: ";
        fflush(stdin);
        getline(cin, name);
        cout << "   - Enter score: ";
        cin >> score;   
        A[i].input(name, score);
    } 

}
int main() 
{
    int N;
    Student studentArray[100];
    cout << "Enter number of student: ";
    cin >> N;
    inputStudentData(N, studentArray); 
    cout << "Truoc khi sap xep:";
    printStudentList(N, studentArray);
    sapxep(N, studentArray);
    cout << "\nSau khi sap xep: ";
    printStudentList(N, studentArray);
    return 0;
}
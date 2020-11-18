#include<iostream>
#include<cmath>
using namespace std;

int giaiPT(double a, double b, double c,double &x1, double &x2){
    double delta = b*b - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        return 0;
    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(){
    double a,b,c;
    double x1,x2;
    do{
        cout << "Enter a (a!=0): ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
    }
    while(!a);// Nếu a=0 thì nhập lại
    int numNo = giaiPT(a,b,c,x1,x2);
        if(numNo == 0) {
        cout << "Phuong trinh da cho vo nghiem" ;
    }
    else if(numNo == 1){
        cout << "Phuong trinh da cho co nghiem kep x= " << x1 ;
    }
    else{
        cout << "Phuong trinh da cho co hai nghiem phan biet" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } 
}
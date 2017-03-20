#include <iostream>
using namespace std;

//prototype
int tambahkan (int a, int b);
float a, b;

//program utama
int main () {
cout <<"masukan nilai A : ";
cin >> a;
cout <<"masukan nilai B : ";
cin >> b;
cout <<"hasil : " << tambahkan (a, b) <<endl;
return 0;
}

int tambahkan ( int a, int b) {
return a + b;
}
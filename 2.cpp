#include <iostream>
using namespace std;

//prototype
void prosesbaca() ;
void prosestukar() ;
void prosestampil() ;

// variable global;
int a, b, temp;

//program utama
int main () {
	prosesbaca() ;
	prosestukar() ;
	prosestampil() ;
	return 0;
	}
//prosesbaca 
void prosesbaca() {
cout <<" masukan nilai A : ";
cin >> a;
cout <<" masukan nilai B : ";
cin >> b;
}

//prosestukar 
void prosestukar() {
 temp = b;
 b = a;
 a = temp;
}
 
  //prosestampil 
  void prosestampil() {
 cout << "=====================" << endl;
 cout << " nilai A sekarang : " << a << endl;
 cout << " nilai B sekarang : " << b;
 }
 
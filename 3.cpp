#include <iostream>
using namespace std;

//prototype
void prosesbaca() ;
int prosestambah() ;
int proseskurang() ;
void prosestampil () ;

// variable global;
int a, b;

//program utama
int main () {
	prosesbaca();
	prosestampil();
	return 0;
	}
	
// proses membaca
void prosesbaca () {
cout <<" masukan nilai A : ";
cin >> a;
cout <<" masukan nilai B : ";
cin >> b;
}
//prosestambah
int prosestambah () {
return a + b;
}

//proseskurang
int proseskurang () {
	int hasil;
	hasil = a - b;
	return hasil;
	}

	//prosestampil
	void prosestampil () {
	cout << " hasiltambah : " << prosestambah () << endl;
	cout << " hasilkurang : " << proseskurang ();
	}
	
	
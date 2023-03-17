
#include <iostream>
using namespace std;

int a[20];            // Deklarasi array a dengan ukuran 20
int n;                // Deklarasi variabel n untuk menyimpan banyak elemen pada array

void input() {        //procedure untuk input
	while (true) {    //looping 
		cout << "masukan banyaknya elemen pada array : "; // Output ke layar
	    cin >> n;     // input dari pengguna
		if (n <= 20)  //jika n kurang dari 1 atau sama dengan 20
			break;    // keluar dari loop
		else {        // jika n lebih dari 20
			cout << "\Array dapat mempunyai maksimal 20 elmen.\n"; // output ke layar 

		}

    }
    cout << endl;                           //output baris kosong
	cout << "====================" << endl; //output ke layar
	cout << "masukan Elemen array" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar

	for (int i = 0; i < n; i++) {             //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //output ke layar
		cin >> a[i];                          //input dari pengguna

	}
}

void display() {   // procedure untuk menampilkan hasil
	cout << endl;                                 // output baris kosong
	cout << "=================================" << endl; //output ke layar
	cout << "Element Array yang telah tersusun" << endl; //output ke layar 
	cout << "=================================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {                 // looping dengan j dimulai dari 0 hingga -1
		cout << a[j] << endl;                     // output ke layar 
	}
	cout << endl;                                 // output baris kosong
}



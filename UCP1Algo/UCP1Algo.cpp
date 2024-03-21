// UCP1Algo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//	4.	Konversi Algorithma berikut kedalam C++:
//		1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//		2.	Find the minimum value in arr[j] to arr[n – 1]:
//				a.Set min_index = j
//				b.Repeat step c varying i from j + 1 to n – 1
//				c.If arr[i] < arr[min_index] :
//					i.min_index = i
//		3.	Swap arr[j] with arr[min_index]


#include <iostream>

using namespace std;

int ilham[10]; // nama array diganti menjai nickname dan jumlah kapasitas array dari nim 20200140100
int n; // data

void input() {
	while (true) {
		cout << "Masukkan jumlah data: "; //output ke layar
		cin >> n; //input dari user
		if (n <= 10) { //jika n kurang dari sama dengan 10
			break; //keluar dari loop
		}
		else {
			cout << "Jumlah data tidak boleh lebih dari 10" << endl; //output ke layar
		}
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Masukkan data: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar

	for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << i + 1 << ": "; //output ke layar
		cin >> ilham[i]; //input dari user
	}
}

void konversiSort() {
	int pass = 1;//deklarasi pass dimulai dari 1
	do{
		for (int j = 0; j < n - 1; j++) { //step 1 Repeat steps 2 and 3 varying j from 0 to n – 2
			int min_index = j; //step 2a Set min_index = j
			for (int i = j + 1; i < n; i++) { //step 2b Repeat step c varying i from j + 1 to n – 1
				if (ilham[i] < ilham[min_index]) { //step 2c If arr[i] < arr[min_index]:
					min_index = i; //step i min_index = i
				}
			}
			swap(ilham[j], ilham[min_index]); //step 3 Swap arr[j] with arr[min_index]

			pass = pass++; //pass ditambah 1

			cout << "\nPass ke-" << pass - 1 << ": "; //output ke layar
			for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
				cout << ilham[i] << " "; //output ke layar
			}
			cout << endl; //output ke layar
		}
	} while (pass <= n - 1); //looping jika pass kurang dari sama dengan n-1
	
}





void display() {
	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Data setelah diurutkan: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << endl; //output ke layar
	for (int j = 0; j < n; j++) { //looping dengan j dimulai dari 0 hingga n-1
		cout << ilham[j] << " "; //output ke layar
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Jumlah pass: " << n - 1 << endl; //output ke layar

}

int main()
{
	input(); 
	konversiSort();
	display();
}

//1. Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
//Jawaban 1 : Buble sort bekerja dengan membandingkan elemen terdekat dari susunan data, 
// dan menukarnya jika dalam urutan yang salah, proses ini berulang sampai tidak ada
//  urutan yang salah. algoritma ini merupakan algoritma paling simpel akan tetapi hanya
// dapat digunakan untuk data yang berukuran kecil saja

//2. Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
//Jawaban 2 : shell sort merupakan peningkatan dari insertion sort yang membandingkan 
// data dengan mengelompokkan data dengan jarak dari beberapa posisi ke bentuk 
// beberapa sublist, lalu disetiap sublist akan dilakuka insertion sort hingga seluruh data
// telah menjadi terurut menggunakan insertion sort

//3. Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma
//  mana yang harus dipilih? Jelaskan mengapa.
//Jawaban 3 : Jika data sudah banyak yang berurutan, maka algorithm sort yang paling baik
//  yaitu insertion sort karena algoritma ini hanya melakukan swap jika ada data yang
//  tidak berurutan saja, kalau sudah terurut maka tidak perlu diswap

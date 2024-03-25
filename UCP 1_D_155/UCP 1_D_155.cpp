// SOAL TYPE 2
//1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
// Cara kerja algorutma bubble sort adalah dengan cara melakukan scan secara berulang dan mencari data dari yang terbesar ke yang terkecil.

// 2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen?
// Cara kerja algoritma shell sort adalah dengan melakukan sortir menggunakan sublist kepada data yang sudah ada kemudian mengelompokan data tersebut sesuai sublist yang sudah dibuat dan kemudian mengurutkan dan memindahkan data dari yang terkecil ke yang terbesar

// 3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// Menggunakan algoritma Insertion Sort karena algoritma ini adalah algoritma yang paling efisien ketika data yang sudah ada beberapa sudah berurutan dan cara kerja dari algoritma ini adalah dengan melakukan scan secara berulang
// dan mencari data yang sudah berurutan kemudian dipindahkan dari data yang terkecil ke data yang terbesar.

//4.	Konversi Algorithma berikut kedalam C++:
//1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//2.	Find the minimum value in arr[j] to arr[n – 1]:
//a.Set min_index = j
//b.Repeat step c varying i from j + 1 to n – 1
//c.If arr[i] < arr[min_index] :
	//i.min_index = i
	//3.	Swap arr[j] with arr[min_index]
	
	//Ketentuan :
	//a.Nama variable array diganti menjadi nickname
	//b.Panjangnya variable array adalah sebanyak 2 nim belakang
	//c.Program bisa input data dan menampilkan data setelah proses sortir.




#include <iostream>
using namespace std;

int arr[55];
int n;

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array :";
		cin >> n;

		if (n <= 55) {
			break;
		}
		else;
	}
	{
		cout << "n\Arrray yang anda masukan maksimal 55 elemen. n/";

	}
	cout << endl;
	cout << "=========================" << endl;
	cout << "Masukan elemen pada array" << endl;
	cout << "=========================" << endl;

	for (int i = 0; i < n; i++);
	{
		cout << "Data ke-" << (1 + 1) << " : ";
		cin >> arr;

	}
}

void insertionsort() {
	int temp;
	int i,j;



}




int main()
{
    
}


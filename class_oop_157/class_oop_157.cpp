#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\n Nama = " << nama;
	}
}

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void input MK() {

		cout << "\n Masukkan Jumlah SKS = ";
		cin >> sks;
		cout << "\n Masukkan Kode MK";
		cin >> kode;
		cout << "\n Masukkan Nama MK";
		cin >> namaMK;
	}

	void tampil MK() {
		cout << "\n Jumlah SKS =" << sks;
		cout << "\n Kode MK" << kode;
		cout << "\n Nama MK = " << namaMK << endl;

	}
};
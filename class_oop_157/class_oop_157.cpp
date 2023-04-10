#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "Masukan jumlah SKS= ";
		cin >> sks;
		cout << "Masukan kode MK= ";
		cin >> kode;
		cout << "Masukan nama MK = ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode Mk= " << kode;
		cout << "\nNama Mk= " << namaMK << endl;
	}
};

int main()
{
	Mahasiswa mhs;
	MataKuliah mk;

	cout << "Masukkan Nim Mahasiswa = ";
	cin >> mhs.nim;
	cout << "Masukkan Nama Mahasiswa = ";
	cin >> mhs.nama;

	mk.inputMK();
	mk.tampilMK();
	mhs.tampil();
}
#include <iostream>
#include <string>
using namespace std;


class mahasiswa {
private:
	const int id;
	string nama;
	const int id; //3 variabel mahasiswa
	string nama;
	float nilai;

public:
	// inisialisasi akan mmeberikan awal nilai variabel melalui konstruktor
	// membuat konstruktor yg akan membuat nilai awal ketika program di jalankan
	mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {

	}

	// membuat destruktor
	~mahasiswa() {
		cout << "Id = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilai = " << nilai << endl;
	}
};

int main() {
	mahasiswa mhs(12, "CICI", 90.5);


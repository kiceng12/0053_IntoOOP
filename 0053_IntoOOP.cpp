#include <iostream>
using namespace std;

class mahasiswa {
public: // akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}

};


class Matakuliah {
    private:
		string kodemk;
		string namamk;
		int sks;
    public :
		void input() {
			cout << "Kode MK: ";
			cin >> kodemk;
			cout << "nama Mk: ";
			cin >> namamk;
			cout << "SKS: ";
			cin >> sks;
		}

		void output() {
			cout << "Kode MK: " << kodemk << endl;
			cout << "Nama MK: " << namamk << endl;
			cout << "SKS: " << sks << endl;


		}
};
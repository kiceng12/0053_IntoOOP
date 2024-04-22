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
		}
};
#include <iostream>
using namespace std;

class mahasiswa {
public: // akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "jurusan: " << jurusan << endl;

	}
};




class matakuliah {
	private:
		string kodemk;
		string namamk;
		int sks;
	public :
		void input() {
			cout << "kod mk: ";
			cin >> kodemk;
			cout << "nama mk: ";
			cin >> namamk;
			cout << "sks: ";
			cin >> sks;
		}
		
		void output() {
			cout << "kode mk: " << kodemk << endl;
			cout << "nama mk: " << namamk << endl;
			cout << "sks: " << sks << endl;
		}

};

int main() {
	mahasiswa mhs;
	matakuliah mk;

	mhs.nama = "budi";
	mhs.umur = 20;
	mhs.jurusan = "teknik informatika";
	mhs.output();

	mk.input();
	mk.output();
	
	return 0;
}
#include <iostream>
using namespace std;
class bidangDatar {
private:
	float  x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(float a) { return 0; }
	virtual float Keliling(float a) { return 0; }
	virtual void cekUkuran() { return; }

	void setX(float a) {
		this->x = a;
	}
	float getX() {
		return x;
	}
	//kerjakan disini//
	void setY(float b) {
		this->y = b;
	}
	float getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
private:
	float jejari;
public:
	Lingkaran() {
		cout << "Lingkaran dibuat\n";
	}
	void input() {
		cout << "Masukkan jejari = ";
		cin >> jejari;
		setX(jejari);
	}

	float Keliling() {
		return 2.0 * 3.14 * getX();
	}
	float Luas() {
		return 3.14 * getX() * getX();
	}

	void cekUkuran() {
		if (Keliling() > 40)
			cout << "Ukuran lingkaran adalah besar.\n" << endl;
		else if (Keliling() > 10 && Keliling() < 40)
			cout << "Ukuran lingkaran adalah sedang.\n" << endl;
		else
			cout << "Ukuran lingkaran adalah kecil.\n" << endl;
	}
};


class Persegipanjang :public bidangDatar { /*lengkapi disini*/ 
private:
	int panjang, lebar;
public:
	Persegipanjang() {
		cout << "Persegipanjang dibuat\n";
	}
	void input() {
		cout << "Masukkan Panjang = ";
		cin >> panjang;
		setX(panjang);
		cout << "Masukkan Lebar = ";
		cin >> lebar;
		setY(lebar);
	}
	float Luas() {
		return getX() * getY();
	}
	float Keliling() {
		return (2 * getX()) + (2 * getY());
	}

	void cekUkuran() {
		if (Keliling() > 40)
			cout << "Ukuran Persegipanjang adalah besar.\n" << endl;
		else if (Keliling() > 10 && Keliling() < 40)
			cout << "Ukuran Persegipanjang adalah sedang.\n" << endl;
		else 
			cout << "Ukuran Persegipanjang adalah kecil.\n" << endl;
	}
};

int main() { /*lengkapi disini*/ 
	char c;
	do
	{
		Lingkaran L;
		L.input();
		cout << "Luas Lingkaran = " << L.Luas() << endl;
		cout << "Keliling lingkaran = " << L.Keliling() << endl;
		L.cekUkuran();

		Persegipanjang P;
		P.input();
		cout << "Luas PersegiPanjang = " << P.Luas() << endl;
		cout << "Keliling PersegiPanjang = " << P.Keliling() << endl;
		P.cekUkuran();

		cout << "Apakah anda ingin mengulang program? Y/N : ";
		cin >> c;
	} while (c == 'Y' || c == 'y');
	return 0;
}

#include <iostream>
using namespace std;

float nMat, nbIng, nRata;
string status;
string nama;

void menentukanLulua() {


	cout << "Masukkan nama: ";
	cin >> nama;

	cout << "Masukkan nila mtk: ";
	cin >> nMat;

	cout << "Masukkan nilai bahasa ingris : ";
	cin >> nbIng;


	nRata = (nMat + nbIng) / 2;

	if (nRata >= 70) {
		status = "Diterima rata rata";
	}
	else if (nMat >= 80)
	{
		status = "Diterima jalur matematika";
	}
	else
	{
		status = "Ditolak";
	}

}

void output() {
	cout << "Nama : " << nama << endl;
	cout << "status : " << status << endl;
}


int main() {
	char pengulangan;
	do
	{
		menentukanLulua();

		output();

		cout << "Apakah ingin mengulang program (y/n): ";
		cin >> pengulangan;

	} while (pengulangan == 'y' || pengulangan == 'Y');
}

//1. contoh deklarasi variable denagan 3 tipe data yang berbeda:
// int sks; 
// float Nmatematika; 
// string nama;
// 
//2. contoh implementasi condisional stetmennt

//float nMat;
//string status;

//
//cout << "Masukkan nila mtk: ";
//cin >> nMat;
// 
// if (nMat >= 70)
//{
//    status = "Lulus nilai matematika";
//}
//else
//{
//    status = "Tidak lulus";
//}
//
//cout << status;

// di sisi kita menggunakan condisonal statment yang daimana apabila  nMat >=70 maka akan di nayatakan lulus, dan apbila nMat < 70 dinyatakn tidak lulus 

//3. struct dosen {
//   string namaDosen;
//   string Alamat;
//   int umur;
// };

//4. contoh impelementasi function input:
// void input () {
//sting nama;
//int umur;
//
//cout << "masukkan nama : " << endl;
//cin >> nama;
//
//cout << "masukkan umur : " << endl;
//cin >> umur;
//}
//
//setelah pembuat tersebuat function dapat di panggil di dalm int main

//5 . contoh implementasi looping di sini saya akan munggunakan loopng for:
// 
//int julang;
//cout << "berapakali ingin melakukan pengulangan: ";
//cin >> julang;
//for (int i = 0; i < julang; i++)
//{
//    cout << "umy maju" << endl;
//}
//
//disini dia akan melakukan pelulangan sesuai dengan berapa kali kita menginginkannya


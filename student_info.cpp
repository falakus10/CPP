#include <iostream>
#include <string>

using namespace std;

struct Adres
{
	string sokak;
	string sehir;
	string postaKodu;
};

struct Ogrenci
{
	int numara;
	string isim;
	Adres adres; //İç içe yapı kullanımı
};

int main()
{
	Ogrenci ogrenci1;
	ogrenci1.numara = 19031903;
	ogrenci1.isim = "Ferhat Alakus";

	ogrenci1.adres.sokak = "Atatürk Cad.";
	ogrenci1.adres.sehir = "Istanbul";
	ogrenci1.adres.postaKodu = "34000";

	cout << "Öğrenci numarasi = "<< ogrenci1.numara << endl;
	cout << "Öğrenci ismi = "<< ogrenci1.isim << endl;
	cout << "Sokak = "<< ogrenci1.adres.sokak << endl;
	cout << "Şehir = "<< ogrenci1.adres.sehir << endl;
	cout << "Posta kodu = "<< ogrenci1.adres.postaKodu << endl;
}
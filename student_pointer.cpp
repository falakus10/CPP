#include <iostream>
#include <string>

using namespace std;

struct Ogrenci
{
    int numara;
    string isim;
};

int main()
{
    Ogrenci *ogrenciPtr = new Ogrenci;

    ogrenciPtr->numara = 12345;
    ogrenciPtr->isim = "Ferhat Alakus";

    cout << "Öğrenci numarasi: " << ogrenciPtr->numara << endl;
    cout << "Öğrenci İsim: "<< ogrenciPtr->isim << endl;

    delete ogrenciPtr;

    return 0;
}
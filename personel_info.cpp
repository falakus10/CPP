#include <iostream>
#include <string>

using namespace std;

struct Calisan
{
    int TCKN;
    string Adi;
    double Maas;

    Calisan(int _Tckn, string _ad, double _maas)
    {
        TCKN = _Tckn;
        Adi = _ad;
        Maas = _maas;
    }
};

int main()
{
    Calisan personel_1(101, "Ahmet", 50000.0);

    cout << "Persolen TC si: "<<personel_1.TCKN<<endl;
    cout << "Personel Adi: "<< personel_1.Adi<< endl;
    cout << "Personel Maasi: "<< personel_1.Maas<< endl;

    return 0;
}
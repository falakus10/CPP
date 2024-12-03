#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int toplam;
    int fark;
    int carp;
    cout << "Birinci sayiyi girin: ";
    cin >> a;
    cout << "ikinci sayiyi girin: ";
    cin >> b;
    toplam = a + b;
    fark = a - b;
    carp = a * b;
    cout << "Toplam: " << toplam << endl;
    cout << "Fark: " << fark << endl;
    cout << "Çarpim: " << carp << endl;
    if (b != 0)
        cout << "Bölüm: " << static_cast<float>(a) / b << endl;
    else
        cout << "Bölüm sonucu tanimsiz" << endl;
    return 0;
}
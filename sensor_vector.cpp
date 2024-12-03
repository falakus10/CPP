#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<float> sensor_verileri;
    float veri;
    cout << "Sensör verilerini girin (çikmak için -1): " <<endl;
    while(true)
    {
        cin >> veri;
        if (veri == -1)
            break;
        sensor_verileri.push_back(veri);
    }
    cout << "Toplam sensör verisi: " << sensor_verileri.size()<<endl;
    cout << "Veriler: ";
    for(float v : sensor_verileri)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
} 
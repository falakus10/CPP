#include <iostream>

using namespace std;

// 1. Pass-by-Value
int	square1(int n)
{
	cout << "square1() içindeki n1'in adresi: " << &n << endl;
	n *= n; // sadece yerel n değişkeni etkilenir
	return n;
}

// 2. Pass-by-Reference with Pointer Arguments
void	square2(int *n)
{
	cout << "square2() içindeki n2'nin adresi: " << n <<endl;
	*n *= *n;
}

//3. Pass-by-Reference with Reference Arguments
void	square3(int &n)
{
	cout << "square3() içindeki n3'ün adresi: " << &n <<endl;
	n *= n;
}

void	example()
{
	int n1;
	n1 = 8;
	cout << "Ana foonksiyondaki n1'in adresi: " << &n1 <<endl;
	cout << "n1'in karesi: "<< square1(n1) << endl;
	cout << "n1'in değeri (değişmedi): " << n1 <<endl;

	int n2;
	n2 = 8;
	cout << "Ana foonksiyondaki n2'in adresi: " << &n2 <<endl;
	square2(&n2);
	cout << "n2'nin karesi: "<< n2 << endl;
	cout << "n2'nin değeri (değişti): " << n2 <<endl;

	int n3;
	n3 = 8;
	cout << "Ana foonksiyondaki n3'in adresi: " << &n3 <<endl;
	square3(n3);
	cout << "n3'ün karesi: "<< n3 << endl;
	cout << "n3'ün değeri (değişti): " << n3 <<endl;
}

int main()
{
	example();
}
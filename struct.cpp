#include <iostream>

using namespace std;

struct koordinat
{
	int x;
	int y;
};

int main()
{
	struct koordinat k1;
	k1.x = 2;
	k1.y = 2;

	struct koordinat k2 = {0, 1};
	cout << "x1 =  " << k1.x << ", y1 =  "<< k1.y <<endl;
	cout << "x2 =  " << k2.x << ", y2 =  "<< k2.y <<endl;
	return 0;
}
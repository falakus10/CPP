#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "ey edip adanada pide ye";
	int i;

	i = 0;
	while(i < (str.size() / 2))
	{
		if (str.at(i) != str.at((str.size() - i) - 1))
		{
			cout << "String is not palindrom."<< endl;
			break;
		}  
		if (i == (str.size() / 2) - 1)
			cout << "String is Palindrom." << endl;
		i++;
	}
	return 0;
}
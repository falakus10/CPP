#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    copy(src, src + 2, dest);
  /*  for(int i = 0; i < 3; i++)
        cout << dest[i] << " ";*/
    fill(dest, dest + 5, 10);
    for(int i = 0; i < 5; i++)
        cout << dest[i] << " ";

    return 0; 
}
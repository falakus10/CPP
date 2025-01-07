#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> yigin;

    yigin.push(10);
    yigin.push(20);
    yigin.push(30);
    
    for (int i = 0; i < 100000; i++)
    {
        yigin.push(i);
    }

    cout << "Top element: " << yigin.top() << endl;

    yigin.pop();
    cout << "Top after pop: " << yigin.top() << endl;
    cout << "Is stack empty: " << (yigin.empty() ? "Yes" : "No") << endl;

    return 0;
}
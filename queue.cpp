#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> kuyruk;

    kuyruk.push(10);
    kuyruk.push(20);
    kuyruk.push(30);

    cout << "Front element: " << kuyruk.front() << endl;

    kuyruk.pop();
    cout << "Front after pop: " << kuyruk.front() << endl;
    cout << "Is queue empty? :" << (kuyruk.empty() ? "Yes" : "No") << endl;

    return 0;
}
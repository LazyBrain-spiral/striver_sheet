#include <iostream>
#include <string>
using namespace std;


template <class T>
class Container
{
private:
    T arr[100];
    int size = 0; 

public:
    
    void add(T value)
    {
        if (size < 100)
        {
            arr[size] = value;
            size++;
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Container<int> c1;
    c1.add(10);
    c1.add(20);
    c1.display();

    Container<string> c2;
    c2.add("peaches");
    c2.add("banana");
    c2.display();

    return 0;
}
#include <iostream>
using namespace std;

class Test
{
public:
    virtual void square(int n) = 0;
};

class Arithmetic : public Test
{
public:
    void square(int n)
    {
        cout << "Square = " << n * n << endl;
    }
};

class ToTestInt
{
public:
    void show()
    {
        Arithmetic a;
        a.square(5);
    }
};

int main()
{
    ToTestInt t;
    t.show();

    return 0;
}
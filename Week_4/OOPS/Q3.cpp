#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }

    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void setX(int a)
    {
        x = a;
    }

    void setY(int b)
    {
        y = b;
    }

    void setXY(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
};

int main()
{
    Point p;

    p.setXY(10, 20);

    p.display();

    return 0;
}
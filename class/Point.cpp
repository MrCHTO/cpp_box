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
        cout << "��" << GetX() << "," << GetY() << "�޲ι��캯��������" << endl;
    }
    Point(int X, int Y)
    {
        x = X, y = Y;
        cout << "��" << GetX() << "," << GetY() << "�������캯��������" << endl;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    Point(Point &p)
    {
        cout << "��" << p.GetX() << "," << p.GetY() << "�������캯��������" << endl;
        x = p.x;
        y = p.y;
    }
    ~Point()
    {
        cout << "��" << GetX() << "," << GetY() << "��������������" << endl;
    }
};
void f(Point p)
{
    cout << "����f֮��" << endl;
    cout << "��" << p.GetX() << "," << p.GetY() << endl;
}
Point g()
{
    Point a(7, 33);
    return a;
}
main()
{
    Point p1, p2(15, 30), p3(p1), p4(p2);
    f(p2);
    p2 = g();
    //g();
    system("pause");
}
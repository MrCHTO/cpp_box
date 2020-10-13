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
        cout << "点" << GetX() << "," << GetY() << "无参构造函数被调用" << endl;
    }
    Point(int X, int Y)
    {
        x = X, y = Y;
        cout << "点" << GetX() << "," << GetY() << "参数构造函数被调用" << endl;
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
        cout << "点" << p.GetX() << "," << p.GetY() << "拷贝构造函数被调用" << endl;
        x = p.x;
        y = p.y;
    }
    ~Point()
    {
        cout << "点" << GetX() << "," << GetY() << "析构函数被调用" << endl;
    }
};
void f(Point p)
{
    cout << "函数f之中" << endl;
    cout << "点" << p.GetX() << "," << p.GetY() << endl;
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
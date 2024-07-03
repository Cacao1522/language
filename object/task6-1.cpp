#include <stdio.h>
#include <cmath>
#include <math.h>
class Object
{
public:
    virtual double area() = 0;
};
class Rectangle : public Object
{
private:
    double point1x;
    double point1y;
    double point2x;
    double point2y;

public:
    Rectangle(double point1x_, double point1y_, double point2x_, double point2y_)
    {
        point1x = point1x_;
        point1y = point1y_;
        point2x = point2x_;
        point2y = point2y_;
    }
    double area() override
    {
        return fabs(point1x - point2x) * fabs(point1y - point2y);
    }
};
class Circle : public Object
{
private:
    int radius;

public:
    Circle(double radius_)
    {
        radius = radius_;
    }
    double area() override
    {
        return M_PI * radius * radius;
    }
};
int main()
{
    Rectangle a(1, 2, 5, 7);
    printf("面積: %f\n", a.area());
    Circle b(3);
    printf("面積: %f\n", b.area());
}
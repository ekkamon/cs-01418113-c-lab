#include <iostream>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;
public:
    Circle(point center, double radius) : center(center), radius(radius) {};

    double area()
    {
        return M_PI * pow(this->radius, 2);
    }

    double distanceFromCenter(point pt)
    {
        return sqrt(pow(pt.xPosition - this->center.xPosition, 2) + pow(pt.yPosition - this->center.yPosition, 2));
    }

    int contains(point pt)
    {
        return this->distanceFromCenter(pt) <= this->radius;
    }
};

int main()
{
    point cPoint, tPoint;
    double radius;
    char buff[1024];

    cout << "Center of Circle: ";
    cin >> cPoint.xPosition;
    cin >> cPoint.yPosition;

    cout << "Radius of Circle: ";
    cin >> radius;

    cout << "Point to Check: ";
    cin >> tPoint.xPosition;
    cin >> tPoint.yPosition;

    Circle circle(cPoint, radius);

    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << tPoint.xPosition << ", " << tPoint.yPosition << ") is " << circle.distanceFromCenter(tPoint) << endl;
    cout << (circle.contains(tPoint) == 1 ? "This circle contains this point." : "This point is not in this circle.") << endl;
}
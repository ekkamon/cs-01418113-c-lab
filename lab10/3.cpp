#include <iostream>
//#include <iomanip>
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
        Circle(point center, double radius)
        {
            this->center = center;
            this->radius = radius;
        }

        double area()
        {
            return M_PI * pow(radius, 2);
        }

        double distanceFromCenter(point pt)
        {
            return sqrt(pow(pt.xPosition - this->center.xPosition, 2) + pow(pt.yPosition - this->center.yPosition, 2));
        }

        int contains(point pt)
        {
            return this->distanceFromCenter(pt) <= radius;
        }

        double getRadius()
        {
            return this->radius;
        }
};

int main()
{
    point pos;
    pos.xPosition = 0;
    pos.yPosition = 0;

   Circle circle(pos, 1);

   point targetPos;
   targetPos.xPosition = 1;
   targetPos.yPosition = 1;

   cout << "radius: " << circle.getRadius() << endl;
   cout << "area: " << circle.area() << endl;
   cout << "distance: " << circle.distanceFromCenter(targetPos) << endl;
   cout << "contain: " << circle.contains(targetPos) << endl;
}
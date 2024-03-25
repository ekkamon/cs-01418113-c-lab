#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Shape3D {
public:
	virtual double volumn() = 0;
    virtual double surfaceArea() = 0;
};

class RightRectangularPyramid : public Shape3D {
private:
    double width = 0, length = 0, height = 0;

public:
    RightRectangularPyramid() : Shape3D() {};
    RightRectangularPyramid(double width, double length, double height) : width(width), length(length), height(height), Shape3D() {};

    double volumn()
    {
        return (length * width * height) / 3;
    }

    double surfaceArea()
    {
        return (length * width) + (length * sqrt(pow((width/2), 2) + pow(height, 2))) + (width * sqrt(pow(length/2, 2) + pow(height, 2)));
    }
};

class Sphere : public Shape3D {
private:
    double radius = 0;

public:
	Sphere() : Shape3D() {};
    Sphere(double radius) : radius(radius), Shape3D() {};

    double volumn()
    {
        return (4.0/3.0) * M_PI * pow(radius, 3);
    }

    double surfaceArea()
    {
        return 4 * M_PI * pow(radius, 2);
    }
};

int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}
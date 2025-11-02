#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Figure {
protected:
    double x, y, z;
public:
    Figure(double x0 = 0, double y0 = 0, double z0 = 0)
        : x(x0), y(y0), z(z0) {}
    virtual double volume() const = 0;
    virtual double area() const = 0;
    virtual void print() const = 0;
};

// Derived class: Cone
class Cone : public Figure {
    double radius, height;
public:
    Cone(double r, double h) : radius(r), height(h) {}
    double volume() const override {
        return M_PI * radius * radius * height / 3.0;
    }
    double area() const override {
        double l = sqrt(radius * radius + height * height);
        return M_PI * radius * (radius + l);
    }
    void print() const override {
        cout << "Cone: r=" << radius << ", h=" << height << endl;
    }
};

// Derived class: Cylinder
class Cylinder : public Figure {
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double volume() const override {
        return M_PI * radius * radius * height;
    }
    double area() const override {
        return 2 * M_PI * radius * (radius + height);
    }
    void print() const override {
        cout << "Cylinder: r=" << radius << ", h=" << height << endl;
    }
};

// Derived class: Sphere
class Sphere : public Figure {
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double volume() const override {
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
    double area() const override {
        return 4 * M_PI * radius * radius;
    }
    void print() const override {
        cout << "Sphere: r=" << radius << endl;
    }
};

int main() {
    Cone cone(3, 5);
    Cylinder cylinder(3, 5);
    Sphere sphere(3);

    cone.print();
    cout << "Volume: " << cone.volume() << ", Area: " << cone.area() << endl << endl;

    cylinder.print();
    cout << "Volume: " << cylinder.volume() << ", Area: " << cylinder.area() << endl << endl;

    sphere.print();
    cout << "Volume: " << sphere.volume() << ", Area: " << sphere.area() << endl;

    return 0;
}

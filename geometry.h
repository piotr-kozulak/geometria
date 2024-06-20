//
// Created by Piotr on 20.06.2024.
//

#ifndef GEOMETRIA_GEOMETRY_H
#define GEOMETRIA_GEOMETRY_H
using namespace std;

using namespace std;

class Square
{
private:
    int length, area;

public:
    Square(int length = 0);
    int getLength()const;
    void setLength(int length);
    int getArea()const;
    int getPerimeter()const;
};

class Circle
{
private:
    double radius, area;

public:
    Circle(double radius = 0);

    double getRadius()const;
    void setRadius(double radius);
    double getArea()const;
    double getPerimeter()const;
};

#endif //GEOMETRIA_GEOMETRY_H

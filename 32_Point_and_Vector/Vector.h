#pragma once
#include "Point.h"

class Vector {
private:
    Point* points;
    int countPoint;

public:
    Vector(); 
    Vector(const Vector& other); 
    Vector(Vector&& other);
    ~Vector();

    Vector& operator=(const Vector& other);

    void Add(Point p); 
    void Print() const; 
};
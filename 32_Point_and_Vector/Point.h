#pragma once
#include <iostream>

class Point {
public:
    int x, y;

    Point(); 
    Point(int x, int y); 

    Point& operator++(); 
    Point& operator--(); 
    bool operator>(const Point& other) const;
    bool operator<(const Point& other) const;
    Point operator!() const;

    void Print() const;
};
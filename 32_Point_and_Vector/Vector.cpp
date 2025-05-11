#include "Vector.h"
using namespace std;

Vector::Vector() : points(nullptr), countPoint(0) {}

Vector::Vector(const Vector& other) : countPoint(other.countPoint) {
    points = new Point[countPoint];
    for (int i = 0; i < countPoint; ++i) {
        points[i] = other.points[i];
    }
}

Vector::Vector(Vector&& other) : points(other.points), countPoint(other.countPoint) {
    other.points = nullptr;
    other.countPoint = 0;
}

Vector::~Vector() { delete[] points; }

Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        delete[] points;
        countPoint = other.countPoint;
        points = new Point[countPoint];
        for (int i = 0; i < countPoint; ++i) {
            points[i] = other.points[i];
        }
    }
    return *this;
}

void Vector::Add(Point p) {
    Point* newPoints = new Point[countPoint + 1];
    for (int i = 0; i < countPoint; ++i) {
        newPoints[i] = points[i];
    }
    newPoints[countPoint] = p;
    delete[] points;
    points = newPoints;
    countPoint++;
}

void Vector::Print() const {
    cout << "Вектор містить " << countPoint << " точки:" << std::endl;
    for (int i = 0; i < countPoint; ++i) {
        points[i].Print();
    }
}
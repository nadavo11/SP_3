//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#ifndef SP_3_ORTHOGONALTRIANGLE_H
#define SP_3_ORTHOGONALTRIANGLE_H
#include "Shape.h"


class OrthogonalTriangle: Shape {
/************************           Fields                      ***************************/
    double a;
/************************          public METHODS                 *************************/
public:
    OrthogonalTriangle(double a);

/** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

/************************               METHODS                 ***************************/
    void draw() const;
};


#endif //SP_3_ORTHOGONALTRIANGLE_H

//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#ifndef SP_3_CIRCLE_H
#define SP_3_CIRCLE_H
#include "Shape.h"
class Circle: public Shape {
/************************               Fields                    ***************************/
    double r;
/************************          public METHODS                 *************************/
public:
    /**Ctors*/
    explicit Circle(double a);
    Circle();
/** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

/************************               METHODS                 ***************************/
};


#endif //SP_3_CIRCLE_H

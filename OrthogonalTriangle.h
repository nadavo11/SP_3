//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#ifndef SP_3_ORTHOGONALTRIANGLE_H
#define SP_3_ORTHOGONALTRIANGLE_H
#include "Shape.h"
class OrthogonalTriangle: public Shape {


private:
/************************               Fields                    ***************************/
    double a;
/************************          public METHODS                 *************************/
public:
    /**Ctors*/
    OrthogonalTriangle(char* color,double width,double a) : Shape(color,width), a(a) {}
    OrthogonalTriangle();
    /**Dtor*/
    ~OrthogonalTriangle(){};
/** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

/************************               METHODS                 ***************************/
    void draw() const override;

    void print() const;
};


#endif //SP_3_ORTHOGONALTRIANGLE_H

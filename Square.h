//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#ifndef SP_3_SQUARE_H
#define SP_3_SQUARE_H
#include "Shape.h"
#include "ostream"
using namespace std;
class Square: public Shape {
/************************               Fields                    ***************************/
    double a;
/************************          public METHODS                 *************************/
public:
    /**Ctors*/
    Square(char* color,double width,double a) : Shape(color,width), a(a) {}
    /**Defalt Ctor*/
    Square();
    /**Dtor*/
    ~Square(){};
    void print() const;

/************************               getters                 ***************************/
/** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

/************************               METHODS                 ***************************/
    void draw() const override;
};




#endif //SP_3_SQUARE_H

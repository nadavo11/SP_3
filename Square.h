//
// Created by pc user on 12/30/2021.
//

#ifndef SP_3_SQUARE_H
#define SP_3_SQUARE_H


#include "Shape.h"

class Square: Shape {


    double a{};
/************************          public METHODS                 *************************/
public:
    /**Ctors*/
    Square(double a);
    Square();
/************************               getters                 ***************************/
/** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

/************************               METHODS                 ***************************/
    void draw() const;
};




#endif //SP_3_SQUARE_H

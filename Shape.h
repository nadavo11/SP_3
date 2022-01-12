//
// Created by pc user on 12/30/2021.
//

#ifndef SP_3_SHAPE_H
#define SP_3_SHAPE_H

#include <cstring>
#include "iostream"
using namespace std;

class Shape {
    /***********************            private fields              ***************************/
    double width;
protected:
    char color[6];

public:
    /***********************            public methods              ***************************/
    /**Ctoe*/
    Shape(){};
    Shape(char* color ,double width):  width(width){strcpy(this->color,color);};
    /**Dtor*/
    virtual ~Shape(){};

    virtual void print() const{};
/************************               getters                 ***************************/
     /** returns shapes perimeter */
    virtual double getPerimeter() const = 0;
    /** returns shapes area */
    virtual double getArea() const = 0;
    double getWidth() const;
    virtual void draw() const{}

};


#endif //SP_3_SHAPE_H

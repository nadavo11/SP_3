//
// Created by pc user on 12/30/2021.
//

#ifndef SP_3_SHAPE_H
#define SP_3_SHAPE_H
#include "iostream"
using namespace std;

class Shape {
    /***********************            private fields              ***************************/
    char* color;
    double width;
public:
    /***********************            public methods              ***************************/
    /**Ctoe*/
    Shape(){};
    Shape(char* color ,double width): color(color), width(width){};
    /**Dtor*/
    virtual ~Shape(){};

    virtual void print() const{};
/************************               getters                 ***************************/
     /** returns shapes perimeter */
    virtual double getPerimeter() const = 0;
    /** returns shapes area */
    virtual double getArea() const = 0;
    char * getColor() const;
    double getWidth() const;
    virtual void draw() const{}

};


#endif //SP_3_SHAPE_H

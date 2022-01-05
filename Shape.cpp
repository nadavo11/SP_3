//
// Created by pc user on 12/30/2021.
//
#include "iostream"
#include "Shape.h"
using namespace std;



ostream &operator<<(ostream &os, const Shape &s) {
    return os<<s.getArea();
}

char *Shape::getColor() const{
    return color;
}

double Shape::getWidth() const{
    return width;
}


void draw(){
    cout<< "shape draw";
}

//
// Created by pc user on 12/30/2021.
//


/***************************          INCLUDES            **********************************/
#include "OrthogonalTriangle.h"
#include "Square.h"
#include "iostream"
#include "math.h"
using namespace std;
/***************************             Ctors           ***********************************/
/**1 input Ctor
/**default Ctor*/
OrthogonalTriangle::OrthogonalTriangle() : Shape() {}

/***************************`           METHODS         ************************************/

double OrthogonalTriangle::getPerimeter() const {

    return (2+ sqrt(2))*a;
}

double OrthogonalTriangle::getArea() const {
    return a*a/2;
}



void OrthogonalTriangle::draw() const {
    for(int i = 0; i < a ;i++){
        for( int j = 0; j < i ; j++ )
            cout<<"* ";
        cout<<"*\n";
    }
}

void OrthogonalTriangle::print() const {
    cout<<"OrthogonalTriangle details:\ncolor = "<< this->color<<", width = "<<this->getWidth()<<", ";
    cout<<", side = "<<a<<endl<<"area = "<< this->getArea()<<", perimeter = "<<this->getPerimeter()<<endl;
    this->draw();

}


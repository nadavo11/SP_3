//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#include "Square.h"
#include "iostream"
using namespace std;
/***************************             Ctors           ***********************************/
/**1 input Ctor
 * Input: length of  a*/
/**default Ctor*/
Square::Square() : Shape() {}

/***************************`           METHODS         ************************************/

double Square::getPerimeter() const {
    return 4*a;
}

double Square::getArea() const {
    return a*a;
}

void Square::draw() const {
    for(int i = 0; i < a ;i++){
        for( int j = 0; j < a - 1;j++ )
            cout<<"* ";
        cout<<"*\n";
    }
}

void Square::print() const {
    cout<<"Square details:\ncolor = "<< this->getColor()<<", width = "<<this->getWidth()<<", ";
    cout<<", side = "<<a<<endl<<"area = "<< this->getArea()<<", perimeter = "<<this->getPerimeter()<<endl;
    this->draw();

}


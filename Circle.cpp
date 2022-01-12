//
// Created by pc user on 12/30/2021.
//

/***************************          INCLUDES            **********************************/
#include "Circle.h"
#include "iostream"
#include "math.h"
using namespace std;
/***************************             Ctors           ***********************************/
/**1 input Ctor
 * Input: length of  a*/
/**default Ctor*/


/***************************`           METHODS         ************************************/

double Circle::getPerimeter() const {
    return 2*M_PI*r;
}

double Circle::getArea() const {
    return M_PI*r*r;
}

void Circle::print() const {
    cout<<"Circle details:\ncolor = "<< this->color<<", width = "<<this->getWidth()<<", ";
    cout<<", radius = "<<r<<endl<<"area = "<< this->getArea()<<", perimeter = "<<this->getPerimeter()<<endl;

}
//
// Created by pc user on 12/30/2021.
//

#include "OrthogonalTriangle.h"
/***************************          INCLUDES            **********************************/
#include "Square.h"
#include "iostream"
using namespace std;
/***************************             Ctors           ***********************************/
/**1 input Ctor
 * Input: length of  a*/
OrthogonalTriangle::OrthogonalTriangle(double a) : Shape(), a(a) {}
/**default Ctor*/
OrthogonalTriangle::OrthogonalTriangle() : Shape() {}

/***************************`           METHODS         ************************************/

double OrthogonalTriangle::getPerimeter() const {
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
//
// Created by pc user on 12/30/2021.
//

#ifndef SP_3_SHAPE_H
#define SP_3_SHAPE_H


class Shape {
 /***********************            private fields              ***************************/
    char* color;
    int width;
public:
/************************               getters                 ***************************/
    virtual /** returns shapes perimeter */
    double getPerimeter() const;
    /** returns shapes area */
    double getArea() const;

};


#endif //SP_3_SHAPE_H

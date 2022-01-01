//
// Created by pc user on 12/30/2021.
//

#ifndef SP_3_SHAPE_H
#define SP_3_SHAPE_H


class Shape {
public:


private:
    /***********************            private fields              ***************************/
    char* color;
    int width;
public:
/************************               getters                 ***************************/
     /** returns shapes perimeter */
    virtual double getPerimeter() const;
    /** returns shapes area */
    virtual double getArea() const;
    virtual void draw() const{}
};


#endif //SP_3_SHAPE_H

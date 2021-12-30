//
// Created by pc user on 12/30/2021.
//
/***************************          INCLUDES            **********************************/
#ifndef SP_3_ARRAY_H
#define SP_3_ARRAY_H
#include "Shape.h"
using namespace std;

template<typename T>
class Array {
    /************************               Fields                    ***************************/
    int cap;
    int n;
    T *arr;

/************************          public METHODS                 *************************/
public:
    /**Ctors*/
    Array();
    /**dtor*/
    ~Array();

    void add();
    void Delete(int i);
    int getSize();

};

template<typename T>
Array<T>::Array() {

}

template<typename T>
Array<T>::~Array() {

}

template<typename T>
void Array<T>::add() {

}

template<typename T>
void Array<T>::Delete(int i) {

}


#endif //SP_3_ARRAY_H

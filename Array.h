//
// Created by pc user on 12/30/2021.
//

/***************************          INCLUDES            **********************************/
#ifndef SP_3_ARRAY_H
#define SP_3_ARRAY_H
#include "Shape.h"
#include "iostream"
using namespace std;

template<class T>
class Array
{
public:
    Array(); // constructor
    Array(const Array &a); // copy constructor
    ~Array(); // distructor
    Array operator = (const Array &a); // assignment operator

    T operator [] (unsigned int index); // get array item
    void add(const T &item); // add item to the end of array

    unsigned int GetSize(); // get len of array (elements)
    void SetSize(unsigned int newsize); // set len of array (elements)
    void Clear(); // clear array
    void expand(); // clear array
    void Delete(unsigned int pos); // delete array item
    void* getptr(); // get void* pointer to array data
    void print(int i);

    enum exception { MEMFAIL }; // exception enum

private:
    T *array; // pointer for array's memory
     int len; // len of array (elemets)
     int cap; // capacity of arrey

    const static int dyn_array_step = 128; // initial len of array memory (elements)
};

//////////////////////////////////////////////////////////////////////


template <class T>
Array<T>::Array()
{
    cap = 1; // First allocation
    len = 0;
    array = new T[cap];
}

template <class T>
Array<T>::~Array()
{
    if (array)
    {
        free(array); // Freeing memory
    }
}


template <class T>
unsigned int Array<T>::GetSize()
{
    return len;
}
/**clear array of all elements*/

template <class T>
void Array<T>::Clear() {
                 //free allocated memory
    free(array);
                //we eliminated all items
    len = 0;
                // set to initial capacity
    cap = 1;
    array = new T[cap];
}

/**this allows the user to index the dynamic array
 * class, by key.
 * INPUT : i - index
 * OUTPUT: T class item in the i'th index*/
template <class T>
T Array<T>::operator [] (unsigned int index){
    return array[index]; // return array element
}
/**this function  is used for adding items
 * to the end of the dynamic array,
 * similar to PUSH.
 *if current capacity is exeeded, we also call extend().
 * INPUT : i - index
 * OUTPUT: T class item in the i'th index*/
template <class T>
void Array<T>::add(const T &item){
    T i;
    len++;
    if (len > cap){
        cap *= 2;
        array = (T *)realloc(array, sizeof(T) * cap);
    }
    array[len - 1] = item;
}

/**this func allows the user to delete items
 * from the dynamic array
 * class, by key.
 * INPUT : i - index
 */
template <class T>
void Array<T>::Delete(unsigned int pos){
    if (len == 1) // If array has only one element
        Clear(); // than we clear it, since it will be deleted
    else
    {
        // otherwise, shift array elements
        for(unsigned int i=pos; i < len - 1; i++)
            array[i] = array[i+1];

        // decrease array len
        len--;
    }
}

template <class T>
void* Array<T>::getptr()
{
    return array; // return void* pointer
}

/************************         private Service METHODS            *************************/
/*** this is a service method to expand the Array's capacity
 * when needed.
 * this function should  only be called within
 * the class,when the user tries to overload the array*/
template<class T>
void Array<T>::expand() {
    //expantion of capacity
    this->cap *= 2;
    T *temp = new T [this->cap];

    // copying all existing items
    for (int i = 0; i < len ; i++ )
        temp[i] = *this->arr[i];

    //free memory:
    delete this->arr;
    this->arr = *temp;

}
template<class T>
void Array<T>::print(int i){
    cout<<array[i];
}
#endif //SP_3_ARRAY_H

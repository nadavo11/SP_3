/********************************************************************************
**          Assignment C++: 1                                                  **
**          Author: Nadav Orenstein, ID: 312349509                             **
**                                                                             **
**  FILENAME:     ex_4.cpp (simple classes implementation & OOP )              **
**  DESCRIPTION:  CPP code that lets user define some objects, and play        **
**                with them.                                                   **
**                the program offers 3 reach menus for the user to choose      **
**                from, and lets him create lines, fractions and even clock    **
**                and manipulate them in a variety of ways.                    **
**  AUTHOR:        Nadav Orenstein                                             **
**  LAST UPDATE:  11/12/21 13:42  (SATURDAY)                                   **
********************************************************************************/
/********************************** HEADERS ************************************/
#include "math.h"               /**general incloudes*/
#include "iostream"
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

                                         /**classes**/
/********************************** MAIN ***************************************/

int main() {
    Square s = Square(12);
    s.draw();
}
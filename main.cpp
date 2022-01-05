/********************************************************************************
**          Assignment C++: 1                                                  **
**          Author: Nadav Orenstein, ID: 312349509                             **
**                                                                             **
**  FILENAME:     ex_3.cpp (simple classes implementation & OOP )              **
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
#include "OrthogonalTriangle.h"
#include "Array.h"
#include  "string.h"
#define MSG " (1) add a shape\n\
 (2) delete a shape\n\
 (3) print a shape\n\
 (4) fuck off\n"
#define MSG2 "choose a shape\n\
 (1) a square\n\
 (2) a circle\n\
 (3) a triangle\n"

using namespace std;

void get_props(const char *shp, const char *side_or_rad, char *color, double *width, double * length);
/********************************** MAIN ***************************************/

int main() {
    /**create A : shape pointers dynamic array**/
    Array<Shape*> A;
    int Q = 1;
    int chs;
    int chs2;
    int i;

    while(Q){
        /** here user chooses between adding a shape, deleteng a shape
         * or prnting a shape, the user may exit the program by choosing 4 */
        cout<<MSG;
        cin>>chs;
        Square sq;
        Circle ci;
        OrthogonalTriangle tri;
        Shape *s;

        char color[6];
        double width;
        double length;

        switch (chs) {
            case 1:
                /** here user chooses weather to add a Square, add a Circle
                * or add a Triangle to the array*/
                cout<<MSG2;
                cin>>chs2;

                if(chs2 == 1) {
                    get_props( "square", "side",color, &width, &length);

                    sq = Square(color, width, length);
                    A.add(&sq);
                }
                if(chs2 == 2) {
                    get_props( "circle", "radius",color, &width, &length);
                    ci = Circle(color, width, length);
                    A.add(&ci);
                }
                if(chs2 == 3) {
                    get_props( "triangle", "side",color, &width, &length);
                    tri = OrthogonalTriangle(color, width, length);
                    A.add(&tri);

                }
                break;
            case 2:
                /** here user chooses a shape to delete from
                 * the array 4 */
                if( not A.GetSize()){cout<<"Array is already empty"<<endl; break;}

                cout<<"please choose the index you wish to delete: ";
                cin>>i;
                if(i >= A.GetSize())
                    throw i;
                A.Delete(i);
                break;
            case 3:
                /** here user chooses a shape to delete from
                 * the array 4 */

                cout<<"please choose the index you wish to print: "<<endl;
                cin>>i;

                s = A[i];
                A[i]->print();
                break;
            case 4:
                Q =0;
                break;
        }
    }


}
void get_props(const char *shp, const char *side_or_rad, char *color, double *width, double * length){
    int user_is_screwing_around = 0;
    cout<<"Enter "<<shp<<"'s color: "<<endl;
    do {
        /** we let the user choose color */
        try{
            cin>>color;
            if(strcmp(color, "green")!=0 && strcmp(color , "blue")!=0 && strcmp(color , "red")!=0)
                throw(color);
            user_is_screwing_around = 0;
        }
        catch (char * color){
            user_is_screwing_around = 1;
            cout<<color<<" isn't a valid color ,please choose red, green or blue"<<endl;
        }
        catch(...){
            user_is_screwing_around = 1;
            cout<<" this isn't a valid color ,please choose red, green or blue"<<endl;
        }
    }while (user_is_screwing_around);

    cout<<"Enter "<<shp<<"'s width: "<<endl;
    cin>>*width;
    cout<<"Enter "<<shp<<"'s "<<side_or_rad<<": "<<endl;
    cin>>*length;
}


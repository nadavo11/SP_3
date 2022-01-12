/********************************************************************************
**          Assignment C++: 1                                                  **
**          Author: Nadav Orenstein, ID: 312349509                             **
**                                                                             **
**  FILENAME:     ex_3.cpp (simple classes implementation & OOP )              **
**  DESCRIPTION:  CPP code that lets user define some objects, and play        **
**                with them.                                                   **
**                the program offers 3 powerfull operations for the user to
 *                choose from:
 *                  * add shape - and store it in a backend dinamic array      **
 *                                                                             **
 *                  * delete an undesired shape from the backend               **
 *                                                                             **
 *                  *print a desired shape, to the terminal.                   **
**                we allow the user to create squares, triangles and even      **
**                circles and draw them to terminal, not to mention            **
**                letting them print valuable information about the shapes     **
 *                they created.                                                **
 *
 *                it is allso                                                  **
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
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
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

        int user_is_screwing_around = 1;

        double width;
        double length;

        switch (chs) {
            case 1:
                /** here user chooses weather to add a Square, add a Circle
                * or add a Triangle to the array*/
                cout<<MSG2;
                cin>>chs2;

                if(chs2 == 1) {
                    char color[6];
                    get_props( "square", "side",color, &width, &length);
                    Square* sq = new Square;

                    *sq = Square(color, width, length);
                    A.add(sq);
                }
                if(chs2 == 2) {
                    char* color[6];
                    get_props( "circle", "radius",*color, &width, &length);
                    Circle* ci = new Circle;

                    *ci = Circle(*color, width, length);
                    A.add(ci);
                }
                if(chs2 == 3) {
                    char* color[6];
                    get_props( "triangle", "side",*color, &width, &length);
                    OrthogonalTriangle* tri =new OrthogonalTriangle;

                    *tri = OrthogonalTriangle(*color, width, length);
                    A.add(tri);

                }
                break;
            case 2:
                /** here user chooses a shape to delete from
                 * the array 4 */
                if( not A.GetSize()){cout<<"Array is already empty"<<endl; break;}
                    while (user_is_screwing_around){
                    try{
                        cout<<"please choose the index you wish to delete: ";
                        cin>>i;
                        if(i >= A.GetSize())
                            throw i;
                        user_is_screwing_around = 0;
                        delete A.remove(i);
                    }
                    catch (int i){
                        user_is_screwing_around = 1;
                        cout<<"index "<<i<<" is out of range in the current array of length "<<A.GetSize()<<endl;
                    }
                    catch (...){
                        user_is_screwing_around = 1;
                        cout<<"there seems to be a problem with your input. try again ";
                    }

                }
                break;
            case 3:
                /** here user chooses a shape to delete from
                 * the array  */
                if( not A.GetSize()){cout<<"Array is already empty"<<endl; break;}
                while (user_is_screwing_around){
                    try {
                        cout<<"please choose the index you wish to print: "<<endl;
                        cin>>i;
                        if(i >= A.GetSize())
                            throw i;

                        user_is_screwing_around = 0;
                        A[i]->print();
                    }

                    catch (int i){
                        user_is_screwing_around = 1;
                        cout<<"index "<<i<<" is out of range in the current array of length "<<A.GetSize()<<endl;
                    }
                    catch (...){
                        user_is_screwing_around = 1;
                        cout<<"there seems to be a problem with your input. try again ";
                    }
                }
                break;
            case 4:
                Q = 0;
                break;
            case 5:
                cout<<A;
                break;
            default:
                cout<<" invalid input, you shall not pass"<<endl;
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


#pragma clang diagnostic pop
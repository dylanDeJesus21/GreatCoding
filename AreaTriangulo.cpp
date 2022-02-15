#include <cmath>
#include <iostream>
#include <Triangle.h>

using namespace std;

//signuture of the function
double computeTriangleArea(Triangle t){
//body of function
double s = (t.side1 + t.side2 + t.side3) / 2;
double area = sqrt(s*(s - t.side1)*(s - t.side2)*(s - t.side3));
return area;
}

int main(){

    cout<< "Area is: "<< computeTriangleArea(Triangle(4, 13, 15)) <<endl;
    cout<< "Area is: "<< computeTriangleArea(Triangle(10, 10, 10)) <<endl;
    cout<< "Area is: "<< computeTriangleArea(Triangle(20, 20, 20)) <<endl;

}

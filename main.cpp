#include "functions.h"

/**
 * @main - program entry point
 * Returns 0 (success)
*/
int main(void) {
    // for debugging purposes
    struct Point {
        float x;
        float y;
    };

    Point point1, point2;   // point

    cout<<"Enter point 1 coordinates :"<<endl;
    cin>>point1.x>>point1.y;
    cout<<"Enter point 2 coordinates :"<<endl;
    cin>>point2.x>>point2.y;

   //
    std::cout << "Enter the coordinates of point A: ";
    std::cin >> A.x >> A.y;

    std::cout << "Enter the coordinates of point B: ";
    std::cin >> B.x >> B.y;

    std::cout << "Enter the coordinates of point C: ";
    std::cin >> C.x >> C.y;

    float AB = distance(A, B);
    float BC = distance(B, C);
    float AC = distance(A, C);

    std::cout << "Distances:" << std::endl;
    std::cout << "AB: " << AB << std::endl;
    std::cout << "BC: " << BC << std::endl;
    std::cout << "AC: " << AC << std::endl;

    float perimeter = calculatePerimeter(A, B, C);
    std::cout << "Perimeter of ∆ABC: " << perimeter << std::endl;

    float area = calculateArea(A, B, C);
    std::cout << "Area of ∆ABC: " << area << std::endl;

    Point P;
    std::cout << "Enter the coordinates of point P: ";
    std::cin >> P.x >> P.y;

    float distanceFromAB = calculateDistanceFromPoint(P, A, B);
    float distanceFromBC = calculateDistanceFromPoint(P, B, C);
    float distanceFromAC = calculateDistanceFromPoint(P, A, C);

    std::cout << "Distance from point P to sides:" << std::endl;
    std::cout << "P to AB: " << distanceFromAB << std::endl;
    std::cout << "P to BC: " << distanceFromBC << std::endl;
    std::cout << "P to AC: " << distanceFromAC << std::endl;
    return (0);
}
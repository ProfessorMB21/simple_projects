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

    Point A, B, C;   // point

    std::cout << "Enter the coordinates of point A: ";
    std::cin >> A.x >> A.y;

    std::cout << "Enter the coordinates of point B: ";
    std::cin >> B.x >> B.y;

    std::cout << "Enter the coordinates of point C: ";
    std::cin >> C.x >> C.y;

    float AB = getDistance(A.x, A.y, B.x, B.y);
    float BC = getDistance(B.x, B.y, C.x, C.y);
    float AC = getDistance(A.x, A.y, C.x, C.y);

    std::cout << "Distances:" << std::endl;
    std::cout << "AB: " << AB << std::endl;
    std::cout << "BC: " << BC << std::endl;
    std::cout << "AC: " << AC << std::endl;

    float perimeter = getPerimeter(A.x, A.y, B.x, B.y, C.x, C.y);
    std::cout << "Perimeter of ∆ABC: " << perimeter << std::endl;

    float area = getArea(A.x, A.y, B.x, B.y, C.x, C.y);
    std::cout << "Area of ∆ABC: " << area << std::endl;

    Point P;
    std::cout << "Enter the coordinates of point P: ";
    std::cin >> P.x >> P.y;

    float distanceFromAB = getDistFromPoint(P.x, P.y, A.x, A.y, B.x, B.y);
    float distanceFromBC = getDistFromPoint(P.x, P.y,B.x, B.y, C.x, C.y);
    float distanceFromAC = getDistFromPoint(P.x, P.y, A.x, A.y, C.x, C.y);

    std::cout << "Distance from point P to sides:" << std::endl;
    std::cout << "P to AB: " << distanceFromAB << std::endl;
    std::cout << "P to BC: " << distanceFromBC << std::endl;
    std::cout << "P to AC: " << distanceFromAC << std::endl;
    return (0);
}
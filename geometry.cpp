#include "functions.h"

/**
 * @getDistance - Returns the perimeter of a triangle given the coordinates
 * @x1 - x coordinate of the first vertex
 * @y1 - y coordinate of the first vertex
 * @x2 - x coordinate of the second vertex
 * @y2 - y coordinate of the second vertex
*/
float getDistance(float x1, float y1, float x2, float y2)
{
    return (sqrt(pow((x1 - x2), 2) - pow((y1 - y2), 2)));
}

/**
 * @getPerimeter - Returns the perimeter of a triangle given the coordinates
 * @x1 - x coordinate of the first vertex
 * @y1 - y coordinate of the first vertex
 * @x2 - x coordinate of the second vertex
 * @y2 - y coordinate of the second vertex
 * @x3 - x coordinate of the third vertex
 * @y3 - y coordinate of the third vertex
*/
float getPerimeter(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float AB = getDistance(x1, y1, x2, y2);
    float AC = getDistance(x1, y1, x3, y3);
    float BC = getDistance(x2, y2, x3, y3);

    return (AB + AC + BC);
}

/**
 * @getArea - Returns the area of the triangle given the coordinates of 
 * the three vertices
 * @x1 - x coordinate of the first vertex
 * @y1 - y coordinate of the first vertex
 * @x2 - x coordinate of the second vertex
 * @y2 - y coordinate of the second vertex
 * @x3 - x coordinate of the third vertex
 * @y3 - y coordinate of the first vertex
*/
float getArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float AB = getDistance(x1, y1, x2, y2);
    float AC = getDistance(x1, y1, x3, y3);
    float BC = getDistance(x2, y2, x3, y3);
    float s = (AB + BC + AC) / 2;

    return (sqrt(s*(s-AB)*(s-BC)*(s-AC)));
}

/**
 * @getDistFromPoint - Returns the distance from a point P to a line segment
 *  of two known vertices (x1, y1) and (x2, y2)
 * @px1 - x coordinate of the abstract point P
 * @px2 - y coordinate of the abstract point P
 * @x3 -  x coordinate of the first known vertex
 * @y3 - y coordinate of the first known vertex
 * @x4 - x coordinate of the second known vertex
 * @y4 - y coordinate of the second known vertex
*/
float getDistFromPoint(float px1, float py1, float x2, float y2, float x3, float y3)
{
    float area = getArea(P, A, B);
    float AB = distance(A, B);
    return (2 * area) / AB;
}
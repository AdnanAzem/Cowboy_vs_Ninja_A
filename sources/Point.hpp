#pragma once
#include <iostream>
using namespace std;
namespace ariel{

    class Point{
        private:
            double coordinate_x;
            double coordinate_y;

        public:
            Point();
            Point(double, double);

            double distance(const Point&); // return the distance between 2 points
            void print(); // print the point example: (2,2)
            string toString();
            Point moveTowards(const Point&, const Point&, double); // return the closest point 

    };
}
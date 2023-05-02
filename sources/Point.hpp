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

            double distance(const Point&);
            void print();
            Point moveTowards(const Point&, const Point&, double);

    };
}
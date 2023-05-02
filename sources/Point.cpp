#include "Point.hpp"
#include <cmath>
namespace ariel{
    Point::Point(): coordinate_x(0), coordinate_y(0){

    }

    Point::Point(double x, double y): coordinate_x(x), coordinate_y(y){

    }

    double Point::distance(const Point& other){
        double dx = coordinate_x - other.coordinate_x;
        double dy = coordinate_y - other.coordinate_y;
        return std::sqrt(dx * dx + dy * dy);
    }

    void Point::print(){
        std::cout << "(" << coordinate_x << ", " << coordinate_y << ")" << std::endl;
    }

    Point Point::moveTowards(const Point& source, const Point& target, double distance){
        double dist = this->distance(target);
        if (dist <= distance) {
            return target;
        } else {
            double dx = target.coordinate_x - coordinate_x;
            double dy = target.coordinate_y - coordinate_y;
            double scale = distance / dist;
            dx *= scale;
            dy *= scale;
            return Point(coordinate_x + dx, coordinate_y + dy);
        }
    }
    
}
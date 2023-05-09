#include "YountNinja.hpp"

namespace ariel{
    YountNinja::YountNinja(string name, const Point& location):Ninja(name,location){
        this->setHealth(100);
        this->setSpeed(14);
    }

    YountNinja::~YountNinja(){
        
    }
}
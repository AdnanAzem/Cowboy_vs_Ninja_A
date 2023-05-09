
#include "OldNinja.hpp"

namespace ariel{
    OldNinja::OldNinja(string name, const Point& location):Ninja(name,location){
        this->setHealth(150);
        this->setSpeed(8);
    }

    OldNinja::~OldNinja(){
        
    }
}
#include "YoungNinja.hpp"

namespace ariel{
    YoungNinja::YoungNinja(string name, const Point& location):Ninja(name,location){
        this->setHealth(100);
        this->setSpeed(14);
    }

}
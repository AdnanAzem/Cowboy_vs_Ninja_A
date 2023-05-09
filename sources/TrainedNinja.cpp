#include "TrainedNinja.hpp"

namespace ariel{
    TrainedNinja::TrainedNinja(string name, const Point& location):Ninja(name,location){
        this->setHealth(120);
        this->setSpeed(12);
    }

    TrainedNinja::~TrainedNinja(){
        
    }
}
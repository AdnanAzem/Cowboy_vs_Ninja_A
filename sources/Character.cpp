#include "Character.hpp"

namespace ariel{
    Character::Character(){

    }

    Character::Character(string name, const Point& location):name(name),location(location){

    }

    bool Character::isAlive(){
        return true;
    }

    double Character::distance (const Point& target){
        return 0;
    }

    void Character::hit(int damage){

    }

    string Character::getName( ){
        return this->name;
    }

    Point Character::getLocation(){
        return this->location;

    }

    string Character::print(){
        return "Character";
    }

    Character::~Character(){
        
    }

    int Character::getHealth(){
        return 0;
    }

}
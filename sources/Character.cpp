#include "Character.hpp"

namespace ariel{
    Character::Character(){

    }

    Character::Character(string name, const Point& location):name(name),location(location){

    }

    bool Character::isAlive(){
        return this->getHealth() > 0;
    }

    double Character::distance (const Point& target){
        return this->getLocation().distance(target);
    }

    void Character::hit(int damage){
        this->setHealth(this->getHealth() - damage);
    }

    string Character::getName( ){
        return this->name;
    }

    Point Character::getLocation(){
        return this->location;

    }

    string Character::print(){
        if(this->isAlive()){
            return "Name: " + this->getName() + ", Health: " + to_string(this->getHealth()) + ", Location: " + this->getLocation().toString();
        }
        else{
            return "{" + this->getName() + "}";
        }
        
    }

    int Character::getHealth(){
        return this->health;
    }

    void Character::setHealth(int health){
        this->health = health;
    }

    Character::~Character(){
        
    }
}
#include "Ninja.hpp"

namespace ariel
{

    Ninja::Ninja(string name, const Point& location):Character(name,location){

    }

    void Ninja::move(Character* character){

    }

    void Ninja::slash(Character* enemy){
        if(this->distance(enemy->getLocation()) < 1 && enemy->isAlive()){
            enemy->setHealth(enemy->getHealth() - 13);
        }
        else{
            throw ("Enemy is not alive!!!");
        }
    }

    int Ninja::getSpeed(){
        return this->speed;
    }

    void Ninja::setSpeed(int speed){
        this->speed = speed;
    }

    string Character::print() {
    if(this->isAlive()){
            return "N ==>> Name: " + this->getName() + ", Health: " + to_string(this->getHealth()) + ", Location: " + this->getLocation().toString();
        }
        else{
            return "{" + this->getName() + "}";
        }
    }


    
} 

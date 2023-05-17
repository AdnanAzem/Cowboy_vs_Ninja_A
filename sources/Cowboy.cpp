#include "Cowboy.hpp"

namespace ariel{
    Cowboy::Cowboy(string name, const Point& location):Character(name,location),amount_of_balls(6){
        this->setHealth(110);
    }

    void Cowboy::shoot(Character* enemy){
        if(enemy->isAlive()){
            enemy->setHealth(enemy->getHealth()-10);
        }
        else{
            // throw("The Enemy is not alive!!!");
        }

    }

    bool Cowboy::hasboolets(){
        return amount_of_balls > 0;
    }

    void Cowboy::reload(){
        if(this->isAlive() && amount_of_balls < 6){
            amount_of_balls = 6;
        }
        else{
            // throw ("{" + this->getName() + "}" + "is not alive!!!");
        }

    }

    int Cowboy::getAmountOfBalls(){
        return this->amount_of_balls;
    }

}
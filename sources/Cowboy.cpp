#include "Cowboy.hpp"

namespace ariel{
    Cowboy::Cowboy(string name, const Point& location):Character(name,location){

    }

    void Cowboy::shoot(Character* character){

    }

    bool Cowboy::hasboolets(){
        return true;
    }

    void Cowboy::reload(){

    }

    Cowboy::~Cowboy(){
        
    }

    int Cowboy::getAmountOfBalls(){
        return this->amount_of_balls;
    }

    


}
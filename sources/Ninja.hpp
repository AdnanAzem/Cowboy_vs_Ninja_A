#pragma once
#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;
        
    public:
        Ninja(string, const Point&);

        void setSpeed(int);

        void move (Character*); // move to other character -- distance = speed of ninja
        void slash (Character*); // if the enemy is alive & distance < 1 reduce 13 health from the enemy
        int getSpeed(); // return the speed
        
    };
      
} 



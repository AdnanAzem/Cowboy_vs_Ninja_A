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

        void move (Character*);
        void slash (Character*);
        int getSpeed();
        
    };
      
} 



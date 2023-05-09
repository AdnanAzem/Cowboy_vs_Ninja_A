#include "Character.hpp"
#include <iostream>
using namespace std;
namespace ariel{

    class Cowboy : public Character{
        private:
            // health = 110, amount_of_balls = 6
            int amount_of_balls;

        public:
            Cowboy(string , const Point&);
            void shoot(Character*); // reduce 10 health from other character
            bool hasboolets(); // return if the cowboy have boolets in the weapon
            void reload(); // reload balls to the weapon 
            int getAmountOfBalls(); // return amount_of_balls
            ~Cowboy();
    };

}
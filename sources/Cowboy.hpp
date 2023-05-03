#include "Character.hpp"
#include <iostream>
using namespace std;
namespace ariel{

    class Cowboy : public Character{
        private:
            int amount_of_balls;

        public:
            Cowboy(string , const Point&);
            void shoot(Character*);
            bool hasboolets();
            void reload();
            int getAmountOfBalls();
            ~Cowboy();
    };

}
#pragma once
#include "Point.hpp"

namespace ariel{
    class Character{
        private:
            Point location;
            string name;
            int health;
        public:
            Character();
            Character(string , const Point&);

            bool isAlive();
            double distance (const Point&);
            int getHealth();
            virtual void hit(int);
            string getName();
            Point getLocation();
            virtual string print();
            ~Character();
    };
}

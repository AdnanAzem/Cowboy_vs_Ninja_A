#include "Point.hpp"

namespace ariel{
    class Character{
        private:
            Point location;
            string name;
            int health;
        public:
            Character();
            Character(string , Point&);



            bool isAlive();
            double distance (const Point&);
            void hit(int);
            string getName();
            Point getLocation();
            void print();
            ~Character();

    };
}
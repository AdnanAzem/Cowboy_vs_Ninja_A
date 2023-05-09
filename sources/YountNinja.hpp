#pragma once
#include "Ninja.hpp"

namespace ariel{
    class YountNinja : public Ninja{
        private:
            // health = 100, speed = 14

        public:
            YountNinja(string , const Point&);
            ~YountNinja();

    };
}
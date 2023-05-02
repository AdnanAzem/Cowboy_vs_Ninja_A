#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>

using namespace std;
namespace ariel{
    class Team{
        private:
            vector<Character> team;
            int teamSize;
            int teamSizeMax;

        public:
            Team(Character&);
            // Team(Character);
            void add(Character&);
            void attack(Character);
            int stillAlive();
            void print();
            ~Team();

    };

}

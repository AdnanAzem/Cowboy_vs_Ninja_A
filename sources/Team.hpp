#pragma once
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include <vector>

using namespace std;
namespace ariel{
    class Team{
        private:
            // the order : 1) cowboy |-->>  2) ninja
            // max members in the team is 10
            vector<Character> members;
            int teamSize;
            int teamSizeMax;

        public:
            Team();
            Team(Character*);

            //getters
            vector<Character> getTeam();

            void add(Character*); // add character to the team
            void attack(Team*); // attack other team -- check if the leader is alive else pick another leader(by smallest distance)
            int stillAlive(); // return the number of the members that still alive in the team
            void print(); // print the details of the members in the team
            ~Team(); // free the memory

    };

}

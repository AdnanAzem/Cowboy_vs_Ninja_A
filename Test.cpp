#include "doctest.h"
#include <iostream>	
#include <stdexcept>
#include <cassert>
#include "sources/Team.hpp"
using namespace ariel;


TEST_CASE("Adding Characters to the team"){
    Point p(2,2);
    Cowboy *c1 = new Cowboy("Tom", p);
    YountNinja *c2 = new YountNinja("Tom", p);
    TrainedNinja *c3 = new TrainedNinja("Tom", p);
    OldNinja *c4 = new OldNinja("Tom", p);
    Ninja *c5 = new Ninja("Tom", p);
    Team team_A(c1); 
    // adding to team should not throw error if the size of team less than 10.
    CHECK_NOTHROW(team_A.add(c2));
    CHECK_NOTHROW(team_A.add(c3));
    CHECK_NOTHROW(team_A.add(c4));
    CHECK_NOTHROW(team_A.add(c5));

    CHECK(typeid(&team_A.getTeam()[0]) == typeid(Cowboy));
    CHECK(typeid(&team_A.getTeam()[1]) == typeid(YountNinja));
    CHECK(typeid(&team_A.getTeam()[2]) == typeid(TrainedNinja));
    CHECK(typeid(&team_A.getTeam()[3]) == typeid(OldNinja));
    CHECK(typeid(&team_A.getTeam()[4]) == typeid(Ninja));

}

TEST_CASE("Adding Character to team that is full"){
        Cowboy *c1 = new Cowboy("Tom", Point(0,0));
        Team team(c1); 
        // fill the team to be there 10 characters
        for (size_t i = 1; i < 9; i++)
        {
            Cowboy *c = new Cowboy(to_string(i), Point(0,0));
            CHECK_NOTHROW(team.add(c));
        }
        // adding one more character to team with 10 should throw error
        CHECK_THROWS(team.add(new Cowboy("kuro",Point(0,0))));    
}

TEST_CASE("team vs team"){
    Team team_A(new Cowboy("Tom", Point(1,19))); 
    Team team_B(new YountNinja("sushi", Point(54,-22))); 
    for (size_t i = 1; i < 9; i++)
    {
        Cowboy *c = new Cowboy(to_string(i), Point(1,19));
        CHECK_NOTHROW(team_A.add(c));
    }

    for (size_t i = 1; i < 9; i++)
    {
        YountNinja *n = new YountNinja(to_string(i), Point(54,-22));
        CHECK_NOTHROW(team_A.add(n));
    }
    // when team attacks himself should not throw error
    CHECK_NOTHROW(team_A.attack(&team_B));
    // when team attacks himself should not throw error
    CHECK_NOTHROW(team_B.attack(&team_A)); 
}

TEST_CASE("team can't attack himself"){
    Team team_A(new Cowboy("Tom", Point(1,19))); 
    for (size_t i = 1; i < 9; i++)
    {
        Cowboy *c = new Cowboy(to_string(i), Point(1,19));
        CHECK_NOTHROW(team_A.add(c));
    }
    // when team attacks himself should throw error
    CHECK_THROWS(team_A.attack(&team_A));
}

TEST_CASE("Check Young Ninja Stats"){
    Point p(2,2);
    YountNinja *ninja = new YountNinja("sakura",Point(2,2));
    // The speed of Young ninja should be 14.
    CHECK(ninja->getSpeed() == 14);
    // The health of Young ninja should be 100.
    CHECK(ninja->getHealth() == 100);
    // check if the Young Ninja is alive should return true.
    CHECK(ninja->isAlive());
    CHECK(ninja->getName() == "sakura");

}

TEST_CASE("Check Trained Ninja Stats"){
    Point p(2,2);
    TrainedNinja *ninja = new TrainedNinja("sakura",Point(2,2));
    // The speed of Trained ninja should be 12.
    CHECK(ninja->getSpeed() == 12);
    // The health of Trained ninja should be 120.
    CHECK(ninja->getHealth() == 120);
    // check if the Trained Ninja is alive should return true.
    CHECK(ninja->isAlive());
    CHECK(ninja->getName() == "sakura");
}

TEST_CASE("Check Old Ninja Stats"){
    Point p(2,2);
    OldNinja *ninja = new OldNinja("sakura",Point(2,2));
    // The speed of Old ninja should be 8.
    CHECK(ninja->getSpeed() == 8);
    // The health of Old ninja should be 150.
    CHECK(ninja->getHealth() == 150);    
    // check if the Old Ninja is alive should return true.
    CHECK(ninja->isAlive());
    CHECK(ninja->getName() == "sakura");

}

TEST_CASE("Check Cowboy Stats"){
    Cowboy *cowboy = new Cowboy("yuri", Point(1,3));
    // The health of Cowboy should be 110.
    CHECK(cowboy->getHealth() == 110);
    // The number of boolets should be 6.
    CHECK(cowboy->getAmountOfBalls() == 6);
    // check if the cowboy is alive should return true.
    CHECK(cowboy->isAlive());
}

TEST_CASE("Cowbow coudn't hit himself"){
    Cowboy *cowboy = new Cowboy("yuri", Point(1,3));
    // shoot himself should throw error.
    CHECK_THROWS(cowboy->shoot(cowboy));
}

TEST_CASE("Ninja speed can't be negative"){
    Ninja *ninja = new Ninja("kakashi", Point(45,98));
    // throw error if the speed is negative
    CHECK_GE(ninja->getSpeed(), 0);
}

TEST_CASE("Cowboy vs Ninja"){
    Ninja *ninja = new Ninja("madara", Point(1,2));
    Cowboy *cowboy = new Cowboy("yuri", Point(1,3));
    // ninja should slash cowboy
    CHECK_NOTHROW(ninja->slash(cowboy));
    // cowboy should shoot ninja
    CHECK_NOTHROW(cowboy->shoot(ninja));
    // ninja should move to cowboy
    CHECK_NOTHROW(ninja->move(cowboy));
    // check if the ninja is alive shouldn't throw error
    CHECK_NOTHROW(ninja->isAlive());
    // check if the cowboy is alive shouldn't throw error
    CHECK_NOTHROW(cowboy->isAlive());
}




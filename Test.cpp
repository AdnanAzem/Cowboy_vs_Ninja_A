#include "doctest.h"
#include "sources/Team.hpp"
using namespace ariel;

TEST_CASE("Check Young Ninja Stats"){
    Point p(2,2);
    YountNinja ninja("adnan",Point(2,2));
    // The speed of Young ninja should be 14.
    CHECK(ninja.getSpeed() == 14);
    // The health of Young ninja should be 100.
    CHECK(ninja.getHealth() == 100);
    // check if the Young Ninja is alive should return true.
    CHECK(ninja.isAlive());
    CHECK(ninja.getName() == "adnan");
    // CHECK_EQ(ninja.getLocation(),p);

}

TEST_CASE("Check Trained Ninja Stats"){
    Point p(2,2);
    TrainedNinja ninja("adnan",Point(2,2));
    // The speed of Trained ninja should be 12.
    CHECK(ninja.getSpeed() == 12);
    // The health of Trained ninja should be 120.
    CHECK(ninja.getHealth() == 120);
    // check if the Trained Ninja is alive should return true.
    CHECK(ninja.isAlive());
    CHECK(ninja.getName() == "adnan");
    // CHECK_EQ(ninja.getLocation(),p);
}

TEST_CASE("Check Old Ninja Stats"){
    Point p(2,2);
    OldNinja ninja("adnan",Point(2,2));
    // The speed of Old ninja should be 8.
    CHECK(ninja.getSpeed() == 8);
    // The health of Old ninja should be 150.
    CHECK(ninja.getHealth() == 150);    
    // check if the Old Ninja is alive should return true.
    CHECK(ninja.isAlive());
    CHECK(ninja.getName() == "adnan");
    // CHECK_EQ(ninja.getLocation(),p);

}

TEST_CASE("Check Cowboy Stats"){
    Cowboy cowboy("yuri", Point(1,3));
    // The health of Cowboy should be 110.
    CHECK(cowboy.getHealth() == 110);
    // The number of boolets should be 6.
    CHECK(cowboy.getAmountOfBalls() == 6);
    // check if the cowboy is alive should return true.
    CHECK(cowboy.isAlive());
}

TEST_CASE("Cowbow coudn't hit himself"){
    Cowboy cowboy("yuri", Point(1,3));
    // shoot himself should throw error.
    CHECK_THROWS(cowboy.shoot(&cowboy));
}


TEST_CASE("Ninja speed can't be negative"){
    Ninja ninja("kakashi", Point(45,98));
    // throw error if the speed is negative
    CHECK_GE(ninja.getSpeed(), 0);
    // CHECK_THROWS(ninja.getSpeed() < 0); 
}

TEST_CASE("Cowboy vs Ninja"){
    Ninja ninja("madara", Point(1,2));
    Cowboy cowboy("yuri", Point(1,3));
    // ninja should slash cowboy
    CHECK_NOTHROW(ninja.slash(&cowboy));
    // cowboy should shoot ninja
    CHECK_NOTHROW(cowboy.shoot(&ninja));
    // ninja should move to cowboy
    CHECK_NOTHROW(ninja.move(&cowboy));
    // check if the ninja is alive shouldn't throw error
    CHECK_NOTHROW(ninja.isAlive());
    // check if the cowboy is alive shouldn't throw error
    CHECK_NOTHROW(cowboy.isAlive());
}


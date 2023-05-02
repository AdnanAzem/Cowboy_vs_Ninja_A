#include "Character.hpp"

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;
    public:
        Ninja(string, Point&);

        void move (Character&);
        void slash (Character&);


        
    };
    

    
    
} 



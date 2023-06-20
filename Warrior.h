#include "Player.h"
#include "utilities.h"

class Warrior : public Player
{
    public:

        /*c'tor for warrior
        @param:playerName: the name of the player */
        Warrior(const char* playerName);
        /*getAttackStrength returns players current strength
        * calculated by the sum of his kevek and his force */
        int getAttackStrength() const;

};


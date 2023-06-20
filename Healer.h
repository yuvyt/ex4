#include "Player.h"

class Healer : public Player
{
    public:
        /*c'tor for Healer
        @param:playerName: the name of the player */
        Healer(const char* playerName);
        void heal(int HealthPointsToAdd);
};
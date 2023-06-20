#include "Card.h"
#include "utilities.h"

class Treasure : Card
{
    private:
        int m_treasure;

    public:
        Treasure();
        void applyEncounter(Player& player) const;
        

};
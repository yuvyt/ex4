#include "Card.h"
#include "utilities.h"

class Mana : Card
{
    private:
        int m_healthPoints;

    public:
        Mana();
        void applyEncounter(Player& player) const;

};
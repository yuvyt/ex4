#include "Card.h"
#include "utilities.h"

class Barfight : Card
{
    private:
        int m_healthPointsLoss;

    public:
        Barfight();
        void applyEncounter(Player& player) const;
        

};
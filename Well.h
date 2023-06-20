#include "Card.h"
#include "utilities.h"

class Well : Card
{
    private:
        int m_healthPointsLoss;

    public:
        Well();
        void applyEncounter(Player& player) const;
        

};
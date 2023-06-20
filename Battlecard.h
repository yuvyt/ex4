#include "Card.h"

class BattleCard: Card
{
    private:
        int m_cardForce;
        int m_loot;
       // int m_damage;
    
    public:
        virtual void applyEncounter(Player& player) const;
};
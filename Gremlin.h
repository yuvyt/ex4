#include "BattleCard.h"

class Gremlin: BattleCard
{
    private:
    int m_damage;
    public:
        Gremlin();
        void applyEncounter(Player& player) const;
};
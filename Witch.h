#include "BattleCard.h"

class Witch: BattleCard
{
    private:
    int m_powerLoss;
    int m_damage;
    public:
        Witch();
        void applyEncounter(Player& player) const;
};
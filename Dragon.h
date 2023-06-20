#include "BattleCard.h"

class Dragon: BattleCard
{
    public:
        Dragon();
        void applyEncounter(Player& player) const;
};

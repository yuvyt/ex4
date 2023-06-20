#include "Card.h"
#include "utilities.h"

class Merchant : Card
{
    private:
        int m_healthPoints;
        int m_healthPointsPrice;
        int m_forcePoints;
        int m_forcePointsPrice;

    public:
        Merchant();
        void applyEncounter(Player& player) const;
        void applyMerchantHrealthEncounter(Player& player) const override;
        void applyMerchantForceEncounter(Player& player) const override;

};


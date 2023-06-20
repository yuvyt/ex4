#include "Well.h"

Well::Well()
{
    m_name = "Well";
    m_healthPointsLoss = 10;
}

void Well::applyEncounter(Player& player) const
{
    if(player.m_type == PlayerType::Ninja)
    {
        printWellMessage(true);
        
    }
    else
    {
        player.damage(m_healthPointsLoss);
        printWellMessage(false);
    }
}

std::ostream& operator<<(std::ostream& os, const Well& well) 
{
    well.printRegularCard(os);
}
#include "Mana.h"
#include "Healer.h"

Mana::Mana()
{
    m_name = "Mana";
    m_healthPoints = 10;
}

void Mana::applyEncounter(Player& player) const
{
    if(player.m_type == PlayerType::Healer)
    {
        player.heal(m_healthPoints);
        printManaMessage(true);
    }
    else
    {
        printManaMessage(false);
    }
}

std::ostream& operator<<(std::ostream& os, const Mana& mana) 
{
    mana.printRegularCard(os);
}
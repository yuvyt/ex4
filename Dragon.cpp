#include "Dragon.h"
using std::out;

Dragon::Dragon()
{
    m_name = "Dragon";
    m_cardForce = 25;
    m_loot = 1000;
}
void Dragon::applyEncounter(Player& player) const
{
    
    if(player.getAttackStrength() >= m_cardForce)
        {
            player.levelUp();
            player.addCoins(m_loot);
            printWinBattle(player.m_name, m_name);
        }
        else
        {
            player.burn();
            printLossBattle(player.m_name, m_name);
        }
}

std::ostream& operator<<(std::ostream& os, const Dragon& dragon) 
{
    dragon.printMonsterCard(os, true);
}

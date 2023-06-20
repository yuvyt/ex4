#include "Gremlin.h"
using std::out;

Gremlin::Gremlin()
{
    m_name = "Gremlin";
    m_cardForce = 5;
    m_loot = 2;
    m_damage = 10;
}
void Gremlin::applyEncounter(Player& player) const
{
    if(player.getAttackStrength() >= m_cardForce)
        {
            player.levelUp();
            player.addCoins(m_loot);
            printWinBattle(player.m_name, m_name);
        }
        else
        {
            player.damage(m_damage);
            printLossBattle(player.m_name, m_name);
        }
}

std::ostream& operator<<(std::ostream& os, const Gremlin& gremlin) 
{
    gremlin.printMonsterCard(os, false);
}
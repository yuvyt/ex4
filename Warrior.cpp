#include "Warrior.h"


Warrior::Warrior(const char* playerName)
{
    m_type = PlayerType::Warrior;
    m_name = playerName;
    m_coins = COINS;
    m_force = FORCE;
    m_healthPoints = MAXHEALTHPOINTS;
    m_level = LEVEL;
    m_maxHealthPoints = MAXHEALTHPOINTS;
}

/*getAttackStrength returns players current strength
* calculated by the sum of his kevek and his force */
int Warrior::getAttackStrength() const
{
    return m_force*2 + m_level;
}

std::ostream& operator<<(std::ostream& os, const Warrior& warrior) 
{
    warrior.printPlayer(os);
}


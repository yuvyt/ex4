#include "utilities.h"
#include "Card.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;

/*
* C'tor of Card class
*
* @param type - The type of the card.
* @param stats - The numeral stats of the card.
* @return
*      A new instance of Card.
*/
Card::Card(CardType type, const CardStats& stats)
{
    m_effect = type;
    m_stats.buff = stats.buff;
    m_stats.cost = stats.cost;
    m_stats.force = stats.force;
    m_stats.heal = stats.heal;
    m_stats.hpLossOnDefeat = stats.hpLossOnDefeat;
    m_stats.loot = stats.loot;
}

// should this stay?

void Card::printRegularCard(std::ostream& os) const
{
    printCardDetails(os,this->m_name);
    printEndOfCardDetails(os);
}


void Card::printMonsterCard(std::ostream& os, bool isDragon) const
{
    if(!isDragon)
    {
        printMonsterDetails(os,this->m_cardForce, this->m_damage,this->m_loot, false);
        printEndOfCardDetails(os);
    }
    else
    {
        printMonsterDetails(os,dragon->m_cardForce, 0 ,dragon->m_loot, true);
        printEndOfCardDetails(os);
    }
}
#include "Card.h"
#include "utilities.h"
#include "Merchant.h"
#include "Healer.h"
#include <string>
using std::cout;
using std::cin;

Merchant::Merchant()
{
    m_name = "Merchant";
    m_healthPoints = 1;
    m_healthPointsPrice = 5;
    m_forcePoints = 1;
    m_forcePointsPrice = 10;
}

Merchant::void applyEncounter(Player& player) const
{
    printMerchantInitialMessageForInteractiveEncounter(std::cout,player->m_name,player->m_coins);
    bool validInput =0;
    string choise;
    int purchaseMode;
    while (!validInput)
    {
        getline(cin, choise);
        purchaseMode = stoi(choise);
        if ((purchaseMode !=0) && (purchaseMode !=1) && (purchaseMode !=2))
        {
            printInvalidInput();
        }
        else
        {
            validInput = 1;
        }

    }
    if (purchaseMode == 1)
    {
        if (player->m_coins >= m_healthPointsPrice)
        {
            applyMerchantHrealthEncounter(player);
            printMerchantSummary(std::cout, player->m_name, 1, m_healthPointsPrice);
        }
        else
        {
            printMerchantInsufficientCoins(std::cout);
        }
    }

    if(purchaseMode == 2)
    {
        if (player->m_coins >= m_forcePointsPrice)
        {    
            applyMerchantForceEncounter(player);
            printMerchantSummary(std::cout, player->m_name, 2, m_forcePointsPrice);
        }
        else
        {
            printMerchantInsufficientCoins(std::cout);
        }
    }

    if(purchaseMode ==0)
    {
        printMerchantSummary(std::cout, player->m_name, 0, m_forcePointsPrice);
    }
    
    

}


void Merchant::applyMerchantHrealthEncounter(Player& player) const override
{
    player.pay(m_healthPointsPrice);
    player.heal(m_healthPoints);
}

void Merchant::applyMerchantForceEncounter(Player& player) const override
{
    player.pay(m_forcePointsPrice);
    player.buff(m_forcePoints);
}

std::ostream& operator<<(std::ostream& os, const Merchant& merchant) 
{
    merchant.printRegularCard(os);
}
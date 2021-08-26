#include <iostream>
#include "boss.h"
#include "manager.h"

Boss::Boss(const int countManager) : _countManager(countManager)
{
    
}

std::vector<Manager*>* Boss::addManager(const int countManager)
{
    _countManager = countManager;

    if(_countManager <=0)
        return nullptr;

    for(int i = 0; i < _countManager; ++i)
    {
        Manager* man = new Manager;
        manager.push_back(man);
    }
    return *manager;
}

Boss::~Boss()
{
    for(auto man : manager)
        delete man;
}
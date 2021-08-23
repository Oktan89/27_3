#include <iostream>
#include <vector>
#include "manager.h"


int main()
{
    int sizeTeams{0};
    std::cout << "Enter number of teams: ";
    std::cin >> sizeTeams;
    std::vector<Manager *> manager;

    for (int i = 0; i < sizeTeams; ++i)
    {
        Manager *man = new Manager;
        std::cout << "Enter number of employee for teams # " << i << ":";
        int sizeEmployee;
        std::cin >> sizeEmployee;
        for (int j = 0; j < sizeEmployee; ++j)
            man->addEmployee();
        manager.push_back(man);
    }
    std::cout<<"Enter Company Director's Directive: ";
    unsigned int dir;
    std::cin >> dir;
    for(auto work : manager)
    {
        work->addTaskSize(dir);
        work->distributionOfTask();
    }
        
    return 0;
}
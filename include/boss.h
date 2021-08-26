#pragma once
#include <vector>

class Manager;


class Boss
{
    int _countManager{0};
    int _countWorker{0};
    std::vector<Manager *> manager;

public:
    Boss(const int countManager = 0);
    ~Boss();
    std::vector<Manager*>* addManager(const int countManager);

};
//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDSYSTEM_HPP
#define OOP_REMINDSYSTEM_HPP

#include <vector>
#include <memory>
#include "ReminderObjectList.hpp"
#include "IsRemindable.hpp"
#include <iostream>
#include <stdexcept>

class ReminderSystem {
private:
    std::vector<std::shared_ptr<ReminderObjectList>> reminderSys;
public:
    ReminderSystem() {};

    ~ReminderSystem() {};


    void push_back(ReminderObjectList bro) {
        push_back(bro);
    }

    std::shared_ptr<ReminderObjectList> pop_back();

    int size() {
        return reminderSys.size();
    }

    void checkedWithName(std::string name);

    void removeWithName(std::string name);

    void printAllRemindObject();


};

#endif //OOP_REMINDSYSTEM_HPP

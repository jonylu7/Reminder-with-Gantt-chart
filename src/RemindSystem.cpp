//
// Created by 盧威任 on 1/4/24.
//


#include "RemindSystem.hpp"


void ReminderSystem::printAllRemindObject() {
    {
        //print all object in vector
        for (auto i: this->reminderSys) {
            std::cout << i->getReminderObjectCheckedStatus() << " ";
            std::cout << i->getReminderObjectName() << "\n";
        }
        std::cout << std::endl;
    }
}


std::shared_ptr<IsRemindable> ReminderSystem::pop_back() {
    std::shared_ptr<IsRemindable> result = reminderSys.back();
    reminderSys.pop_back();
    return result;
}


void ReminderSystem::checkedWithName(std::string name) {
    for (auto i: reminderSys) {
        if (i->getReminderObjectName() == name) {
            i->setChecked();
            return;
        }
    }
    throw std::invalid_argument("didn't find object with name when checked");
}

void ReminderSystem::removeWithName(std::string name) {

    for (int i = 0; i < reminderSys.size(); i++) {
        if (reminderSys[i]->getReminderObjectName() == name) {
            reminderSys.erase(reminderSys.begin() + i);
            return;
        }
    }
    throw std::invalid_argument("didn't find object with name when removed");
}


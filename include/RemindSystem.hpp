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
#include "ReadAndSave.hpp"

class ReminderSystem {
private:
    File fileMethod;
    std::vector<std::shared_ptr<ReminderObjectList>> reminderSys;
public:
    ReminderSystem() {};

    ~ReminderSystem() {};


    void push_back(ReminderObjectList bro) {
        reminderSys.push_back(std::make_shared<ReminderObjectList>(bro));
    }

    std::shared_ptr<ReminderObjectList> pop_back();

    int size() {
        return reminderSys.size();
    }

    void checkedWithName(std::string name);

    void removeWithName(std::string name);

    void printAllRemindObject();

    void saveFile() {
        fileMethod.saveToFile(reminderSys, "ReminderSys.bin");
    }

    void loadFile() {
        reminderSys = fileMethod.readFromFile("ReminderSys.bin");
    }

};

#endif //OOP_REMINDSYSTEM_HPP

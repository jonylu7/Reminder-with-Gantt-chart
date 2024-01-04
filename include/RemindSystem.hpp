//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDSYSTEM_HPP
#define OOP_REMINDSYSTEM_HPP

#include <vector>
#include <memory>
#include "BasicRemindObject.hpp"
#include "GanttProject.hpp"
#include "IsRemindable.hpp"
#include <iostream>
#include <stdexcept>

class ReminderSystem {
private:
    std::vector<std::shared_ptr<IsRemindable>> reminderSys;
public:
    ReminderSystem() {};

    ~ReminderSystem() {};

    void push_back(std::shared_ptr<IsRemindable> obj) {
        reminderSys.push_back(obj);
    };

    void push_back(GanttProject ganttProject) {
        std::shared_ptr<IsRemindable> obj = std::make_shared<GanttProject>(ganttProject);
        push_back(obj);
    }

    void push_back(BasicRemindObject bro) {
        std::shared_ptr<IsRemindable> obj = std::make_shared<BasicRemindObject>(bro);
        push_back(obj);
    }

    std::shared_ptr<IsRemindable> pop_back();

    int size() {
        return reminderSys.size();
    }

    void checkedWithName(std::string name);

    void removeWithName(std::string name);

    void printAllRemindObject();


};

#endif //OOP_REMINDSYSTEM_HPP

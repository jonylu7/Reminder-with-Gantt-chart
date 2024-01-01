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

    int size() {
        return reminderSys.size();
    }


    std::shared_ptr<IsRemindable> pop_back() {
        std::shared_ptr<IsRemindable> result = reminderSys.back();
        reminderSys.pop_back();
        return result;
    };


    void printAllRemindObject() {
        //print all object in vector
        for (auto i: reminderSys) {
            std::cout << i->getReminderObjectCheckedStatus() << " ";
            std::cout << i->getReminderObjectName() << "\n";
        }
        std::cout << std::endl;


    }

};

#endif //OOP_REMINDSYSTEM_HPP

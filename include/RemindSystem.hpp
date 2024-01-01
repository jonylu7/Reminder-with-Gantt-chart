//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDSYSTEM_HPP
#define OOP_REMINDSYSTEM_HPP

#include <vector>
#include <memory>
#include "RemindObject.hpp"
#include "GanttProject.hpp"
#include "IsRemindable.hpp"
class ReminderSystem {
private:
    std::vector<std::shared_ptr<ReminderObject>> reminderSys;
public:
    ReminderSystem() {};

    ~ReminderSystem() {};

    void push_back(GanttProject obj) {

    };


    std::shared_ptr<ReminderObject> pop_back() {
        std::shared_ptr<ReminderObject> result=reminderSys.back();
        reminderSys.pop_back();
        return result;
    };




};

#endif //OOP_REMINDSYSTEM_HPP

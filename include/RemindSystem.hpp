//
// Created by 盧威任 on 12/21/23.
//

#ifndef OOP_REMINDSYSTEM_HPP
#define OOP_REMINDSYSTEM_HPP

#include <vector>
#include <memory>
#include "RemindObject.hpp"
#include "GanttObject.hpp"

class ReminderSystem {
private:
    std::vector<std::shared_ptr<ReminderObject>> reminderSys;
public:
    ReminderSystem() {};

    ~ReminderSystem() {};

    void push_back(GanttObject obj) {
        reminderSys.push_back(std::make_shared<GanttObject>(obj));
    };

    std::shared_ptr<ReminderObject> pop_back() {
        std::shared_ptr<ReminderObject> result=reminderSys.back();
        reminderSys.pop_back();
        return result;
    };


};

#endif //OOP_REMINDSYSTEM_HPP

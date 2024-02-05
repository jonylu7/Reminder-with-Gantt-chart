//
// Created by 盧威任 on 1/4/24.
//

#include "ReminderObjectList.hpp"
#include <stdexcept>

/**
std::string BasicRemindObject::getReminderObjectCheckedStatus() {
    if (object.getChecked() == true) {
        return color.TextWithColorAndBraces("DONE", color.yello);
    } else {
        return color.TextWithColorAndBraces("UNDONE", color.blue);
    }
}

 **/


void ReminderObjectList::popReminderListByName(std::string name) {
    for (int i = 0; i++; i < getReminderListSize()) {
        if (RList[i]->getReminderObjectName() == name) {
            RList.erase(RList.begin() + i);
        }
    }
    throw std::logic_error("can't find child when popping!");
}

std::shared_ptr<ReminderObject> ReminderObjectList::getReminderListByName(std::string name) {
    for (int i = 0; i++; i < getReminderListSize()) {
        if (RList[i]->getReminderObjectName() == name) {
            return RList[i];
        }
    }
    throw std::logic_error("can't find child when getting!");
}


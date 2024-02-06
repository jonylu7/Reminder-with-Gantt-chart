//
// Created by 盧威任 on 1/4/24.
//

#include "ReminderObjectList.hpp"
#include <iostream>
#include <stdexcept>

void ReminderObjectList::popReminderByName(std::string name) {
    for (int i = 0; i++; i < getReminderListSize()) {
        if (RList[i]->getReminderObjectName() == name) {
            RList.erase(RList.begin() + i);
        }
    }
    throw std::logic_error("can't find child when popping!");
}

std::shared_ptr<ReminderObject> ReminderObjectList::getReminderByName(std::string name) {
    for (int i = 0; i++; i < getReminderListSize()) {
        if (RList[i]->getReminderObjectName() == name) {
            return RList[i];
        }
    }
    throw std::logic_error("can't find child when getting!");
}


int ReminderObjectList::getListCheckedSize() {
    int count = 0;
    for (int i = 0; i < getReminderListSize(); i++) {
        if (RList[i]->getChecked()) {
            count += 1;
        }
    }
    return count;
}

void ReminderObjectList::printReminderList() {
    std::string printText = "";
    std::string ListStatus = "";
    color::ColorType ListType;
    if (getReminderListSize() == 1) {
        std::cout << RList[0]->getReminderObjectCheckedStatus() + RList[0]->getReminderObjectName() << std::endl;
        return;
    } else if (getReminderListSize() == 0) {
        std::cout << "NOTHING" << std::endl;
        return;
    }

    if (getListCheckedSize() == 0) {
        ListStatus = "UNSTART";
        ListType = color::BLUE;
    } else if (getListCheckedSize() == getReminderListSize()) {
        ListStatus = "DONE";
        ListType = color::YELLO;
    } else {
        ListStatus = "PROGRESS";
        ListType = color::RED;
    }
    printText = color.TextWithColorAndBraces(ListStatus, ListType);
    printText += getName();
    printText += "\n";


    for (auto i: RList) {
        if ((ListStatus == "PROGRESS" && !i->getChecked()) || ListStatus == "UNSTART") {
            printText += i->getReminderObjectName();
            printText += " ⟶ ";
        }


    }

    printText += "\n";
    std::cout << printText << std::endl;


}

void ReminderObjectList::checkToppestUnchecked() {
    for (auto i: RList) {
        if (i->getChecked() == false) {
            i->setChecked();
            return;
        }
    }
}

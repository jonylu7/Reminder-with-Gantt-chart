//
// Created by 盧威任 on 2/5/24.
//

#include "RemindSystem.hpp"
#include "ReminderObjectList.hpp"
#include <memory>
#include "Date.hpp"
#include <iostream>

int main() {
    ReminderSystem rsys;
    rsys.loadFile();
    Date someday(2024, 2, 3);
    while (true) {
        rsys.printAllRemindObject();
        std::string input;
        std::cin >> input;

        if (input == "1") {
            std::string rmName;
            std::cin >> rmName;
            ReminderObject rm(rmName, false, "", someday);
            std::cout << rm.getReminderObjectCheckedStatus() << rm.getReminderObjectName() << std::endl;
            char index;
            std::cin >> index;
            rsys.printAllRemindObject();
            rsys.getListbyIndex(int(index))->append(std::make_shared<ReminderObject>(rm));
            rsys.printAllRemindObject();
        } else if (input == "2") {
            ReminderObjectList list;
            std::string listName;
            std::cin >> listName;
            list.setName(listName);
            rsys.push_back(list);
        } else if (input == "3") {
            break;
        }
    }
    rsys.saveFile();
    return 0;
}
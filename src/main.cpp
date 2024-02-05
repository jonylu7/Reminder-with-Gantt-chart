//
// Created by 盧威任 on 2/5/24.
//

#include "RemindSystem.hpp"
#include "ReminderObjectList.hpp"

#include "Date.hpp"


int main() {
    ReminderSystem rsys;
    Date someday(2024, 2, 3);
    ReminderObject rm("RemindTest", false, "test", someday);
    ReminderObjectList bro1(rm);
    rm.setName("2");
    ReminderObjectList bro2(rm);

    rsys.push_back(bro1);
    rsys.push_back(bro2);

    rsys.saveFile();
    ReminderSystem r2;
    r2.loadFile();
    r2.printAllRemindObject();
}